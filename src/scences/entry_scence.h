#ifndef _ENTRY_SCENCE_H_
    #define _ENTRY_SCENCE_H_

#include "SekaiEngine/objects/scence.h"

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
};

#endif // _ENTRY_SCENCE_H_