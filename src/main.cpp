#include <iostream>
#include "application/Application.hpp"

int main()
{
    SekaiEngine::Application::Application app("Game", 1280, 720);
    app.addScrence("start", new SekaiEngine::Core::Scence());
    app.start("start");
    return 0;
}