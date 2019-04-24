#include "SprinterMonster.hh"
#include "TimeManager.hh"
#include <iostream>

SprinterMonster::SprinterMonster() {
    TimeManager::GetInstance().Start();
    SetLife(25);
}

SprinterMonster::~SprinterMonster() {
}

void SprinterMonster::Draw() {
    Character::Draw();
}

void SprinterMonster::Update() {
    TimeManager::GetInstance().Update();
    unsigned int elapsedTime = TimeManager::GetInstance().GetElapsedTime();
    std::cout << " Sprinter zombie : elapsed time : " << elapsedTime << std::endl;
    double deplacement = elapsedTime;
    deplacement *= 5;
    deplacement /= 1000;
    SetX(GetX() + deplacement);
    SetY(GetY() + deplacement);
}