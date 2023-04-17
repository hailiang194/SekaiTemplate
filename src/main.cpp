#include <iostream>
#include <core/Container.hpp>
#include <core/Scence.hpp>

int main()
{
    SekaiEngine::Core::Scence scence;
    SekaiEngine::Core::Container container;
    scence.addObject(&container, SekaiEngine::Core::SCENCE_LAYER::CAMERA);
    return 0;
}