#ifndef __ABSTRACT_ENTITY_HH__
#define __ABSTRACT_ENTITY_HH__

class AbstractEntity 
{
    protected:
        AbstractEntity();

    public:
        virtual ~AbstractEntity();

    protected:
        virtual void Draw() = 0;
        virtual void Update() = 0;
};
#endif
