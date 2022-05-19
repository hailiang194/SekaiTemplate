#include "entry_scence.h"

EntryScence::EntryScence()
    :SekaiEngine::Object::Scence(WHITE), m_circle(SekaiEngine::Utility::Vector2D(200, 200), 100),
        m_rectangle(SekaiEngine::Utility::Vector2D(500, 100), 300, 100), m_texture(std::string("icon.png"))
{

}

EntryScence::EntryScence(const EntryScence& scence)
    :SekaiEngine::Object::Scence(scence), m_circle(scence.m_circle), m_rectangle(scence.m_rectangle), m_texture(scence.m_texture)
{

}

EntryScence& EntryScence::operator=(const EntryScence& scence)
{
    SekaiEngine::Object::Scence::operator=(scence);

    m_circle = scence.m_circle;
    m_rectangle = scence.m_rectangle;

    return (*this);
}

EntryScence::~EntryScence()
{

}

void EntryScence::setupThis()
{
    SekaiEngine::Object::Scence::setupThis();
    m_circle.transform().color() = RED;
    m_rectangle.transform().color() = BLUE;
    m_texture.transform().position() = {500, 200};
    m_texture.source().width() *= 0.8f;
    m_texture.scaleY() = 5.0f;
}

void EntryScence::updateThis()
{
    SekaiEngine::Object::Scence::updateThis();
}

void EntryScence::drawThis()
{
    SekaiEngine::Object::Scence::drawThis();
    m_circle.drawGraphic();
    m_rectangle.drawGraphic();
    m_texture.drawGraphic();
    
}

void EntryScence::killThis()
{
    SekaiEngine::Object::Scence::killThis();
}