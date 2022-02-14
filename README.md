# SekaiTemplate
The template that implement SekaiEngine to develop game

## Libraries
* raylib 4.0.0

## Requirements
* git
* [CMake](https://cmake.org/download/)
* [Emscripten SDK](https://emscripten.org/docs/getting_started/downloads.html) (for Web platform)
* **MSVC** or **Makefile**
* **Python3** (for automation installer)

## Installation
### Clone this project
``` bash
git clone https://github.com/hailiang194/SekaiEngine.git <project_name>
```
**Note:** You can **NOT** use **SekaiEngine** for your project name

### Install SekaiEngine
#### Windows, Debian(Ubuntu, Linux Mint, etc) and Redhat(Fedora, CentOS, etc) users
Run the ```setup.py``` as super user mode
``` bash
sudo python setup.py
```
**Note:** Do **NOT** use **sudo** for **Windows**. **Windows** users need to install **git** and set it as an **environment variable** before. 

## Generate project
### Desktop platform
Create ```build``` folder and go to this folder 
``` bash
mkdir build
cd build
```
run CMake
``` bash
cmake ..
```
After that, It's going to generate a project for you
### Web platform
At the root project folder run
``` bash
emcmake cmake -S . -B build -DPLATFORM=Web
```
## Build project
### Desktop platform
#### **MSVC:**
If you set ```MSBuild.exe``` as a PATH, Run ```MSBuild.exe``` the ```*.snl``` file in build folder.
```
MSBuild <Project-name>.sln
```
If you open by Visual Studio, keep going

#### **Makefile**

Go to build folder and run
```
make
```
### Web platform
Go to build folder
``` bash
cd build
```
Run makefile
``` bash
make PLATFORM=PLATFORM_WEB -B
```
## Start our game
### Desktop platformm
#### **MSVC**
If you build project by ```MSBuild.exe```, your execution file is in
```
<Project root folder>\bin\<Configure Mode>\<Project-name>.exe
```
and if you use Visual Studio, just click **Run**
#### **Makefile**
Your execution file in in ```<Project root folder>\bin``` folder
### Web platform
Go to ```<Project root folder>\bin``` folder
Run python server
```
python -m http.server <port>
```
Go to the browser and access to
```
localhost:<port>/<Project-name>.html
```