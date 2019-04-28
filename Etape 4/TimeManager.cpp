#include "TimeManager.hh"

TimeManager::TimeManager() {
}

TimeManager::~TimeManager() {
}

void TimeManager::Start() {
    _lastStart = std::chrono::system_clock::now();
    _updateStart = std::chrono::system_clock::now();
    _update = std::chrono::system_clock::now();
}

void TimeManager::Update() {
    _updateStart = _update;
    _update = std::chrono::system_clock::now();
}

unsigned int TimeManager::GetElapsedTime() const {
    std::chrono::duration<double> elapsedTime = _update - _updateStart;
    return (elapsedTime.count() * 1000);
}

unsigned int TimeManager::GetStartedTime() const {
    std::chrono::duration<double> startedTime = _update - _lastStart;
    return (startedTime.count() * 1000);
}