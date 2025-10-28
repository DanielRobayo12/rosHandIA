from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'roshandia_pkg' 

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        
        (os.path.join('share',package_name, 'urdf'), glob('urdf/*.urdf')),
        (os.path.join('share',package_name, 'launch'), glob('launch/*.py')),
        (os.path.join('share',package_name, 'urdf/mesh'), glob('urdf/mesh/*.stl')),
        (os.path.join('share', package_name, 'rviz'), glob('rviz/*.rviz')),
        
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='daniel-robayo',
    maintainer_email='daniel.felipe@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'handRead01 = roshandia_pkg.handRead01:main',
            'connectHand = roshandia_pkg.connectHand:main',
        ],
    },
)
