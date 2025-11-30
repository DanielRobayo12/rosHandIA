## Artificial Vision Hand Move

This is a enjoy proyect to move a robotic hand with openCV and mediapipe libraries in a ros2 enviroment

>### Preparate the enviroment.
Fist we need create a virtual envieroment in python to use te libraries openCV and mediapipe
- Open a terminal an write

        apt install python3.12-venv
- Copy the proyect int the folder where yoy gonna work the proyect

        git clone https://github.com/DanielRobayo12/rosHandIA.git


- Write in a terminal to create the **VE**

      sudo python -m venv handIA
  
The name "handIA" its free


- To activate the Virtual enviroment write

      souurce hadIA/bin/activate
we can see out terminal like this

`(handIA2) daniel-robayo@danirob:~/handIA2$`

      
- In the **VE** opened we gonna install our libreries
  
        python -m pip install mediapipe
        pip install opencv-contrib-python
        pip install numpy==1.26.4
        pip install lark
        pip install pyyaml
        pip install "empy>=3.3.4"
        pip install catkin_pkg empy lark-parser setuptools
        

- Now go to de rute /rosHandIA

      cd rosHandIA
  
- Activate the ros enviroment 

      source /opt/ros/jazzy/setup.bash
      source install/setup.bash
- And compilate

      colcon build
  
Now we can work whit the artificial vision and ros2 enviroment


> ## Move a robotic hand whit artificial vision

The physical conecction it's very important to can do work the proyect, after cheking the physical connection conect the .cpp file whit the ESP32 board

- Run the node to see and register the hands landmarks

        ros2 run roshandia_pkg handRead01.py
- After run the node connection with the board in another terminal

        ros2 run roshandia_pkg connectHand.py
  And enjoy whith the robot hand controlled by yourself

> ## Move the hand and sim whit Artificial Vision

- Launch display.launch.py

      ros2 launch roshandia_pkg display.launch.py

In rviz2 go to "add" and pick "RobotModel", in "Descripcion Topic" select "/robot_description", if the model don´t load, select in "Fixed Frame" the joint "arm"

      




