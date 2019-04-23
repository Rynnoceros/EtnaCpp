#include "TimeManager.hh"

TimeManager::TimeManager() {

}

TimeManager::~TimeManager() {

}

void TimeManager::Start() {
    _lastStart = std::chrono::system_clock::now();
}

void TimeManager::Update() {
    if (_lastUpdate != std::chrono::system_clock::time_point::min()) {
        _elapsedTime = std::chrono::system_clock::now() - _lastUpdate;
    }
    _lastUpdate = std::chrono::system_clock::now();
}

unsigned int TimeManager::GetElapsedTime() const {
    if (_elapsedTime != std::chrono::duration<double>::min()) {
        return _elapsedTime.count();
    } else {
        return 0;
    }
    
}

unsigned int TimeManager::GetStartedTime() const {
    if (_elapsedStart != std::chrono::duration<double>::min()) {
        if (_lastUpdate == std::chrono::system_clock::time_point::min()) {
            return (std::chrono::system_clock::now() - _lastStart).count();
        } else {
            return _elapsedStart.count();
        }
    } else {
        return 0;
    }
}