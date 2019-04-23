#include "TimeManager.hh"

TimeManager::TimeManager() {

}

TimeManager::~TimeManager() {

}

void TimeManager::Start() {
    _lastStart = std::chrono::system_clock::now();
}

void TimeManager::Update() {
    _elapsedTime = std::chrono::system_clock::now() - _lastUpdate;
    _elapsedStart = _lastUpdate - _lastStart;
    _lastUpdate = std::chrono::system_clock::now();
}

unsigned int TimeManager::GetElapsedTime() const {
    if (_lastUpdate != std::chrono::system_clock::time_point::min()) {
        return _elapsedTime.count();
    } else {
        return 0;
    }
    
}

unsigned int TimeManager::GetStartedTime() const {
    return _elapsedStart.count();
}