#include "entry_scence.h"

EntryScence::EntryScence()
    :SekaiEngine::Object::Scence(WHITE)
{
    text1 = new SekaiEngine::Graphic::Text("Text1", RED, {100, 100});
    text1->fontSize() = 30.0f;
    text1->setZIndex(1);
    addGameObject(text1);

    text2 = new SekaiEngine::Graphic::Text("Text2", BLUE, {150, 110});
    text2->fontSize() = 30.0f;
    text2->setZIndex(2);
    addGameObject(text2);

    text3 = new SekaiEngine::Graphic::Text("Text3", GREEN, {200, 120});
    text3->fontSize() = 30.0f;
    text3->setZIndex(3);
    addGameObject(text3);

    text4 = new SekaiEngine::Graphic::Text("Text4", PINK, {250, 130});
    text4->fontSize() = 30.0f;
    text4->setZIndex(4);
    addGameObject(text4);

    text5 = new SekaiEngine::Graphic::Text("Text5", PURPLE, {300, 140});
    text5->fontSize() = 30.0f;
    text5->setZIndex(5);
    addGameObject(text5);
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
    static int count = 0;
    static bool flip = true;
    if(count == 60)
    {
        flip = !flip;
        count = 0;
    }
    //text1->setZIndex((flip) ? 3: -3);
    text2->setZIndex((flip) ? 2 : 4);
    text4->setZIndex((flip) ? 4 : 2);
    ++count;
}

void EntryScence::draw()
{
    SekaiEngine::Object::Scence::draw();
}

void EntryScence::kill()
{
    SekaiEngine::Object::Scence::kill();
}