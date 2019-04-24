#ifndef __SPRINTER_MONSTER_HH__
#define __SPRINTER_MONSTER_HH__
#include "Character.hh"

class SprinterMonster : public Character {
    public:
        SprinterMonster();
        virtual ~SprinterMonster();
        virtual void Draw() override;
        virtual void Update() override;
};
#endif