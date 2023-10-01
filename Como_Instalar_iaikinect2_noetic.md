# Cómo instalar iai_kinect2 con opencv4 para ROS Noetic

En el espacio de trabajo de ROS Noetic, clonar el repositorio mencionado:

 cd ~/catkin_ws/src/

 git clone https://github.com/paul-shuvo/iai_kinect2_opencv4.git
 
Dirigirse al paquete:

 cd iai_kinect2_opencv4

Instalar dependencias:

 rosdep install -r --from-paths .
 
Compilar: 

 cd ~/catkin_ws
 catkin_make -DCMAKE_BUILD_TYPE="Release"
 
# Para Compilar añadir en la segunda línea del archivo CMakeLists.txt

- set( CMAKE_CXX_STANDARD 14)
