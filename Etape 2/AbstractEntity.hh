#ifndef __ABSTRACT_ENTITY_HH__
#define __ABSTRACT_ENTITY_HH__

class AbstractEntity 
{
    public:
        AbstractEntity();
        virtual ~AbstractEntity();

    protected:
        virtual void Draw() = 0;
        virtual void Update() = 0;
};
#endif
