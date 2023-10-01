# Cómo instalar libfreenect en ubuntu
Instalar dependencias:

- Build tools, libusb, TurboJPEG, OpenGL, VAAPI for Intel only, OpenNI2.

sudo apt-get install build-essential cmake pkg-config  libusb-1.0-0-dev libturbojpeg0-dev libglfw3-dev  libva-dev libjpeg-dev  libopenni2-dev -y


# Clonar repositorio
cd ~ 

git clone https://github.com/OpenKinect/libfreenect2.git 

# Compilar
cd libfreenect2 

mkdir build && cd build 

cmake .. -DCMAKE_INSTALL_PREFIX=$HOME/freenect2 

make 

sudo make install


# Otorgar permisos
sudo cp ../platform/linux/udev/90-kinect2.rules /etc/udev/rules.d/

echo 'export LIBVA_DRIVER_NAME=dummy' >> ~/.bashrc

# Ejecutar prueba
./bin/Protonect
