#include "Scene.hh"

Scene::Scene() {
}

Scene::~Scene() {
    _list.clear();
}

std::list<AbstractEntity*> Scene::GetEntities() const {
    return _list;
}

void Scene::AddEntity(AbstractEntity *toAdd) {
    _list.push_back(toAdd);
}

void Scene::RemoveEntity(AbstractEntity *toRemove) {
    _list.remove(toRemove);
}

