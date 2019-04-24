#include "SprinterMonster.hh"
#include "TimeManager.hh"

SprinterMonster::SprinterMonster() {
    SetLife(25);
}

SprinterMonster::~SprinterMonster() {
    Character::~Character();
}

void SprinterMonster::Draw() {
    Character::Draw();
}

void SprinterMonster::Update() {
    Character::Update();
    unsigned int elapsedTime = 0;
    TimeManager::GetInstance().Start();
    while (elapsedTime < 1000) {
        TimeManager::GetInstance().Update();
        elapsedTime = TimeManager::GetInstance().GetStartedTime();
    }
    SetX(GetX() + 5);
    SetY(GetY() + 5);
}