#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
from launch import LaunchDescription
from launch.actions import OpaqueFunction
from launch_ros.actions import Node
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

# Función para leer URDF
def load_urdf(context, urdf_path):
    with open(urdf_path, 'r') as f:
        return f.read()

# Función que crea los nodos
def launch_setup(context, *args, **kwargs):

    # 1️⃣ Ruta al URDF
    urdf_file = PathJoinSubstitution([
        FindPackageShare('roshandia_pkg'),
        'urdf',
        'hand.urdf'
    ]).perform(context)

    # Leer URDF
    robot_description = load_urdf(context, urdf_file)

    # 2️⃣ Nodo robot_state_publisher
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description
        }]
    )

    # 3️⃣ Nodo para spawnear el robot en Gazebo
    spawn_node = Node(
        package='ros_gz_sim',
        executable='create',
        name='spawn_hand',
        output='screen',
        arguments=[
            '-topic', 'robot_description',
            '-name', 'hand',
            '-allow_renaming', 'true'
        ]
    )

    return [robot_state_publisher_node, spawn_node]

# LaunchDescription
def generate_launch_description():
    return LaunchDescription([
        OpaqueFunction(function=launch_setup)
    ])
