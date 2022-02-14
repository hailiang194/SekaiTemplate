#ifndef _ENTRY_SCENCE_H_
    #define _ENTRY_SCENCE_H_

#include "SekaiEngine/objects/scence.h"
#include "SekaiEngine/graphics/text.h"

class EntryScence: public SekaiEngine::Object::Scence
{
public:
    EntryScence();
    EntryScence(const EntryScence& scence);
    EntryScence& operator=(const EntryScence& scence);
    ~EntryScence();

    void setup() override;

    void update() override;

    void draw() override;

    void kill() override;
private:
    SekaiEngine::Graphic::Text* text1;
    SekaiEngine::Graphic::Text* text2;
    SekaiEngine::Graphic::Text* text3;
    SekaiEngine::Graphic::Text* text4;
    SekaiEngine::Graphic::Text* text5;
};

#endif // _ENTRY_SCENCE_H_