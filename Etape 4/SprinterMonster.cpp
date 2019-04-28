#include "SprinterMonster.hh"
#include "TimeManager.hh"

SprinterMonster::SprinterMonster() {
    this->SetLife(25);
    this->SetX(0);
    this->SetY(0);
}

SprinterMonster::~SprinterMonster() {
}

void SprinterMonster::Draw() {
    Character::Draw();
}

void SprinterMonster::Update() {
    unsigned int elapsedTime = TimeManager::GetInstance().GetElapsedTime();
    this->SetX(this->GetX() + 5*(elapsedTime/1000.0));
    this->SetY(this->GetY() + 5*(elapsedTime/1000.0));
}