#include "ZombieMonster.hh"
#include "TimeManager.hh"

ZombieMonster::ZombieMonster() {
    SetLife(100);
}

ZombieMonster::~ZombieMonster() {
}

void ZombieMonster::Update() {
    Character::Update();
    unsigned int elapsedTime = 0;
    TimeManager::GetInstance().Start();
    while (elapsedTime < 1000) {
        TimeManager::GetInstance().Update();
        elapsedTime = TimeManager::GetInstance().GetStartedTime();
    }
    SetX(GetX() + 1);
    SetY(GetY() + 1);
}

void ZombieMonster::Draw() {
    Character::Draw();
}