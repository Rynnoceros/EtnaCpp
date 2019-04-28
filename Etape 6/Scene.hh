#ifndef __SCENE_HH__
#define __SCENE_HH__
#include "AbstractEntity.hh"
#include <list>

class Scene {
    private:
        std::list<AbstractEntity*> _list;

    public:
        Scene();
        virtual ~Scene();
        std::list<AbstractEntity*> GetEntities() const;
        void AddEntity(AbstractEntity*);
        void RemoveEntity(AbstractEntity*);
};
#endif