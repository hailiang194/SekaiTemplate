# SekaiTemplate
The template that implement SekaiEngine to develop game

## Libraries
* raylib 4.0.0

## Requirements
* git
* [CMake](https://cmake.org/download/)
* [Emscripten SDK](https://emscripten.org/docs/getting_started/downloads.html) (for Web platform)
* **MSCV** or **Makefile**
* **Python3** (for automation installer)

## Installation
### Clone this project
```
git clone https://github.com/hailiang194/SekaiEngine.git <project_name>
```
**Note:** You can **NOT** use **SekaiEngine** for your project name

### Install SekaiEngine
#### Windows, Debian(Ubuntu, Linux Mint, etc) and Redhat(Fedora, CentOS, etc) users
Run the ```setup.py``` as super user mode
```
sudo python setup.py
```
**Note:** Do **NOT** use **sudo** for **Windows**. **Windows** users need to install **git** and set it as an **environment variable** before. 

## Generate project
Create ```build``` folder and go to this folder 
``` bash
mkdir build
cd build
```
### Desktop platform
run CMake
```
cmake ..
```
After that, It's going to generate a project for you
### Web platform
Please, install ```Emscripten SDK``` before

Run CMake
```
emcmake cmake -H ..
```

Run Make
```
make PLATFORM=PLATFORM_WEB -B
```