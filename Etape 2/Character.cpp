#include "Character.hh"

Character::Character() : _x(0), _y(0), _life(0)
{
}

double Character::GetX() const
{
    return this->_x;
}

double Character::GetY() const
{
    return this->_y;
}

void Character::SetX(double x) 
{
    this->_x = x;
}

void Character::SetY(double y)
{
    this->_y = y;
}

int Character::GetLife() const
{
    return this->_life;
}

void Character::SetLife(int life)
{
    this->_life = life;
}

Character::~Character()
{
}