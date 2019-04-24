#include "TimeManager.hh"

TimeManager::TimeManager() {

}

TimeManager::~TimeManager() {

}

void TimeManager::Start() {
    _lastStart = std::chrono::system_clock::now();
    _elapsedStart = _lastStart - _lastStart;
}

void TimeManager::Update() {
    if (_lastUpdate != std::chrono::system_clock::time_point::min()) {
        _elapsedTime = std::chrono::system_clock::now() - _lastUpdate;
    }
    _lastUpdate = std::chrono::system_clock::now();
    _elapsedStart = _lastUpdate - _lastStart;
}

unsigned int TimeManager::GetElapsedTime() const {
    if (_elapsedTime != std::chrono::duration<double>::min()) {
        return _elapsedTime.count();
    } else {
        return 0;
    }
    
}

unsigned int TimeManager::GetStartedTime() const {
    if (_lastStart == std::chrono::system_clock::time_point::min()) {
        return 0;
    } else {
        if (_lastUpdate == std::chrono::system_clock::time_point::min()) {
            return (std::chrono::system_clock::now() - _lastStart).count();
        } else {
            return _elapsedStart.count();
        }
    }
}