#include "MonsterFactory.hh"
#include "SprinterMonster.hh"
#include "ZombieMonster.hh"

MonsterFactory::MonsterFactory() {

}

MonsterFactory::~MonsterFactory() {

}

Character* MonsterFactory::Create(const std::string& toCreate) {
    if (toCreate.compare("SprinterMonster")) {
        return new SprinterMonster();
    } else if (toCreate.compare("ZombieMonster")) {
        return new ZombieMonster();
    } else {
        return NULL;
    }
}