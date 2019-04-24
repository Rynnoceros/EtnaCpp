#include "SprinterMonster.hh"
#include "TimeManager.hh"

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
    Character::Update();
    TimeManager::GetInstance().Update();
    unsigned int elapsedTime = TimeManager::GetInstance().GetStartedTime();
    double deplacement = elapsedTime / 1000 * 5;
    SetX(GetX() + deplacement);
    SetY(GetY() + deplacement);
}