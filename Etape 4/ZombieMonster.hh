#ifndef __ZOMBIE_MONSTER_HH__
#define __ZOMBIE_MONSTER_HH__
#include "Character.hh"

class ZombieMonster : public Character {
    protected:
        ZombieMonster();
        virtual ~ZombieMonster();
        virtual void Draw() override;
        virtual void Update() override;
};
#endif