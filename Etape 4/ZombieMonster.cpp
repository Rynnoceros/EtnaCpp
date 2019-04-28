#include "ZombieMonster.hh"
#include "TimeManager.hh"

ZombieMonster::ZombieMonster() {
    this->SetLife(100);
    this->SetX(0);
    this->SetY(0);
}

ZombieMonster::~ZombieMonster() {
}

void ZombieMonster::Update() {
    TimeManager::GetInstance().Update();
    unsigned int elapsedTime = TimeManager::GetInstance().GetElapsedTime();
    this->SetX(this->GetX()+ (elapsedTime/1000.0));
    this->SetY(this->GetY() + (elapsedTime/1000.0));
}

void ZombieMonster::Draw() {
    Character::Draw();
}