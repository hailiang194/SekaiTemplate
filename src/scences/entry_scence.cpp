#include "entry_scence.h"

EntryScence::EntryScence()
    :SekaiEngine::Object::Scence(WHITE)
{

}

EntryScence::EntryScence(const EntryScence& scence)
    :SekaiEngine::Object::Scence(scence)
{

}

EntryScence& EntryScence::operator=(const EntryScence& scence)
{
    SekaiEngine::Object::Scence::operator=(scence);
    return (*this);
}

EntryScence::~EntryScence()
{

}

void EntryScence::setup()
{
    SekaiEngine::Object::Scence::setup();
}

void EntryScence::update()
{
    SekaiEngine::Object::Scence::update();
}

void EntryScence::draw()
{
    SekaiEngine::Object::Scence::draw();
}

void EntryScence::kill()
{
    SekaiEngine::Object::Scence::kill();
}