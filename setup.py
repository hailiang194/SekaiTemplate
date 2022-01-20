import subprocess
import platform
from os import path
import os
import stat

DEVICE_OS = "Unknown"

system_platform = platform.system()

if system_platform == "Windows":
    DEVICE_OS = "Windows"
elif system_platform == "Linux":
    if path.exists("/etc/redhat-release"):
        DEVICE_OS = "Redhat"
    elif path.exists("/etc/debian_version"):
        DEVICE_OS = "Debian"

print("Detected OS: {}".format(DEVICE_OS))

if DEVICE_OS == "Windows":
    print("Warning: You system must install Git and CMake to complete the installation.")
    print("Please make sure that you\'re environment variables include git")
    print("Press Enter to continue...")
    input()
elif DEVICE_OS == "Redhat":
    print("Installing necessary packages...")
    package_install = subprocess.run("dnf install -y git cmake g++", shell=True)
    if package_install.returncode != 0:
        print("Installation failed. Try to install git, cmake and g++ by yourself")
        exit(package_install.returncode)
    print("Installed successfully")
elif DEVICE_OS == "Debian":
    print("Installing necessary packages...")
    package_install = subprocess.run("apt install -y git cmake g++", shell=True)
    if package_install.returncode != 0:
        print("Installation failed. Try to install git, cmake and g++ my yourself")
    

SEKAI_ENGINE_GIT_URL = "https://github.com/hailiang194/SekaiEngine.git"

clone_engine_process = subprocess.run("git clone {}".format(SEKAI_ENGINE_GIT_URL), shell=True)

if DEVICE_OS == "Debian":
    print("Install packages for SekaiEngine...")
    install_file_path = "./SekaiEngine/scripts/pre-installer/linux/debian/preinstaller.sh" 
    os.chmod(install_file_path, stat.S_IEXEC)
    package_install = subprocess.run(install_file_path, shell=True)
    if package_install.returncode != 0:
        print("Installation failed. Try to run {} again".format(install_file_path))
        exit(package_install.returncode)
elif DEVICE_OS == "Redhat":
    print("Install packages for SekaiEngine...")
    install_file_path = "./SekaiEngine/scripts/pre-installer/linux/redhat/preinstaller.sh" 
    os.chmod(install_file_path, stat.S_IEXEC)
    package_install = subprocess.run(install_file_path, shell=True)
    if package_install.returncode != 0:
        print("Installation failed. Try to run {} again".format(install_file_path))
        exit(package_install.returncode)

