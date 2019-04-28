#ifndef __MONSTER_FACTORY_HH_HH
#define __MONSTER_FACTORY_HH_HH
#include "Character.hh"
#include <iostream>

class MonsterFactory {
    public:
        Character* Create(const std::string&);
        MonsterFactory();
        virtual ~MonsterFactory();
};
#endif