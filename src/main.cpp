#include <iostream>
#include "SekaiEngine/core/application.h"
#include "scences/entry_scence.h"

int main()
{
    SekaiEngine::Core::Application app;
    app.start(SekaiEngine::Object::Scence_ptr(new EntryScence()));
    return 0;
}