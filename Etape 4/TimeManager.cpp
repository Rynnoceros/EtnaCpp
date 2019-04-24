#include "TimeManager.hh"
#include <iostream>

TimeManager::TimeManager() {
}

TimeManager::~TimeManager() {
}

void TimeManager::Start() {
    _lastStart = std::chrono::system_clock::now();
    _lastUpdate = std::chrono::system_clock::time_point::min();
    _elapsedTime = _lastStart - _lastStart;
}

void TimeManager::Update() {
    if (_lastUpdate > std::chrono::system_clock::time_point::min()) {
        _elapsedTime = std::chrono::system_clock::now() - _lastUpdate;
    }
    _lastUpdate = std::chrono::system_clock::now();
}

unsigned int TimeManager::GetElapsedTime() const {
    return (_elapsedTime.count() * 1000);
}

unsigned int TimeManager::GetStartedTime() const {
    std::chrono::duration<double> startedTime = _lastUpdate - _lastStart;
    return (startedTime.count() * 1000);
}