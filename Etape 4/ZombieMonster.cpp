#include "ZombieMonster.hh"
#include "TimeManager.hh"
#include <iostream>

ZombieMonster::ZombieMonster() {
    std::cout << " Monster zombie start: " << std::endl;
    TimeManager::GetInstance().Start();
    SetLife(100);
}

ZombieMonster::~ZombieMonster() {
}

void ZombieMonster::Update() {
    TimeManager::GetInstance().Update();
    unsigned int elapsedTime = TimeManager::GetInstance().GetElapsedTime();
    std::cout << " Monster zombie : elapsed time : " << elapsedTime << std::endl;
    double deplacement = elapsedTime;
    deplacement /= 1000;
    SetX(GetX() + deplacement);
    SetY(GetY() + deplacement);
}

void ZombieMonster::Draw() {
    Character::Draw();
}