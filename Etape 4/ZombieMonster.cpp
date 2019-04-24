#include "ZombieMonster.hh"
#include "TimeManager.hh"

ZombieMonster::ZombieMonster() {
    TimeManager::GetInstance().Start();
    SetLife(100);
}

ZombieMonster::~ZombieMonster() {
}

void ZombieMonster::Update() {
    Character::Update();
    TimeManager::GetInstance().Update();
    unsigned int elapsedTime = TimeManager::GetInstance().GetElapsedTime();
    double deplacement = elapsedTime / 1000;
    SetX(GetX() + deplacement);
    SetY(GetY() + deplacement);
}

void ZombieMonster::Draw() {
    Character::Draw();
}