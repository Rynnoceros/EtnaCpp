#ifndef __CHARACTER_HH__
#define __CHARACTER_HH__
#include "AbstractEntity.hh"

class Character : public AbstractEntity {
    private:
        double _x;
        double _y;
        int _life;

    protected:
        Character();
        virtual ~Character();
        double GetX() const;
        double GetY() const;
        void SetX(double);
        void SetY(double);
        int GetLife() const;
        void SetLife(int);
};
#endif