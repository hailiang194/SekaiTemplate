#ifndef _ENTRY_SCENCE_H_
    #define _ENTRY_SCENCE_H_

#include "SekaiEngine/objects/scence.h"
#include "SekaiEngine/shapes/circle.h"
#include "SekaiEngine/shapes/rectangle.h"
#include "SekaiEngine/core/game.h"

class EntryScence: public SekaiEngine::Object::Scence
{
public:
    EntryScence();
    EntryScence(const EntryScence& scence);
    EntryScence& operator=(const EntryScence& scence);
    ~EntryScence();

    void setupThis() override;

    void updateThis() override;

    void drawThis() override;

    void killThis() override;
private:
    SekaiEngine::Graphic::Circle2D m_circle;
    SekaiEngine::Graphic::Rectangle m_rectangle;
    std::uintptr_t test;
};

#endif // _ENTRY_SCENCE_H_