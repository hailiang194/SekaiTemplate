#include <iostream>
#include "SekaiEngine/core/application.h"
#include "scences/entry_scence.h"

int main()
{
    SekaiEngine::Core::Application app;
    app.addScence("entry", new EntryScence());
    app.start("entry");
    return 0;
}