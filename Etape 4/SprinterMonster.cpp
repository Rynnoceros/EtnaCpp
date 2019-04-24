#include "SprinterMonster.hh"
#include "TimeManager.hh"

SprinterMonster::SprinterMonster() {
    SetLife(25);
}

SprinterMonster::~SprinterMonster() {
}

void SprinterMonster::Draw() {
    Character::Draw();
}

void SprinterMonster::Update() {
    Character::Update();
    unsigned int elapsedTime = TimeManager::GetInstance().GetElapsedTime();
    double deplacement = elapsedTime;
    deplacement *= 5;
    deplacement /= 1000;
    SetX(GetX() + deplacement);
    SetY(GetY() + deplacement);
    TimeManager::GetInstance().Update();
}