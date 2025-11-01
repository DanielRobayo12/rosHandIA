## Artificial Vision Hand Move

This is a enjoy proyect to move a robotic hand with openCV and mediapipe libraries in a ros2 enviroment

>### Preparate the enviroment.
Fist we need create a virtual envieroment in python to use te libraries openCV and mediapipe
- Write in a terminal to create the **VE**

      python -m venv handIA2
The name "handIA2" its free
- To activate the Virtual enviroment drite

      souurce hadIA/bin/activate
we can see out terminal like this

`(handIA2) daniel-robayo@danirob:~/handIA2$`

      
- In the **VE** opened we gonna install our libreries
  
        pip install mediapipe
        pip install opencv-python
        pip install numpy
        pip install lark
- Now go to de rute /ros

      cd ros
- And activate the ros enviroment 

      source install/setup.bash
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

      




