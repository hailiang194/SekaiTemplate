import subprocess

SEKAI_ENGINE_GIT_URL = "https://github.com/hailiang194/SekaiEngine.git"

clone_engine_process = subprocess.run("git clone {}".format(SEKAI_ENGINE_GIT_URL), shell=True)
