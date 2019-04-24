#include "ZombieMonster.hh"
#include "TimeManager.hh"

ZombieMonster::ZombieMonster() {
    SetLife(100);
}

ZombieMonster::~ZombieMonster() {
}

void ZombieMonster::Update() {
    Character::Update();
    unsigned int elapsedTime = TimeManager::GetInstance().GetElapsedTime();
    double deplacement = elapsedTime;
    deplacement /= 1000;
    SetX(GetX() + deplacement);
    SetY(GetY() + deplacement);
    TimeManager::GetInstance().Update();
}

void ZombieMonster::Draw() {
    Character::Draw();
}