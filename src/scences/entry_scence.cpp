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

void EntryScence::setupThis()
{
    SekaiEngine::Object::Scence::setupThis();
}

void EntryScence::updateThis()
{
    SekaiEngine::Object::Scence::updateThis();
}

void EntryScence::drawThis()
{
    SekaiEngine::Object::Scence::drawThis();
}

void EntryScence::killThis()
{
    SekaiEngine::Object::Scence::killThis();
}