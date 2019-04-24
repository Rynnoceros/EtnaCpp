#include "TimeManager.hh"

TimeManager::TimeManager() {
}

TimeManager::~TimeManager() {
}

void TimeManager::Start() {
    _lastStart = std::chrono::system_clock::now();
    _lastUpdate = std::chrono::system_clock::now();
    _previousUpdate = std::chrono::system_clock::now();
}

void TimeManager::Update() {
    _previousUpdate = _lastUpdate;
    _lastUpdate = std::chrono::system_clock::now();
}

unsigned int TimeManager::GetElapsedTime() const {
    std::chrono::duration<double> elapsedTime = _lastUpdate - _previousUpdate;
    return (elapsedTime.count() * 1000);
}

unsigned int TimeManager::GetStartedTime() const {
    std::chrono::duration<double> startedTime = _lastUpdate - _lastStart;
    return (startedTime.count() * 1000);
}