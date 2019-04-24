#include "TimeManager.hh"
#include <iostream>
#include <ctime>

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

    std::time_t last = std::chrono::system_clock::to_time_t(_lastUpdate);

    std::cout << " Update _lastUpdate: " << std::ctime(&last) << std::endl;
    _lastUpdate = std::chrono::system_clock::now();
    std::cout << " Update _lastUpdate: " << std::ctime(&last) << std::endl;
}

unsigned int TimeManager::GetElapsedTime() const {
    return (_elapsedTime.count() * 1000);
}

unsigned int TimeManager::GetStartedTime() const {
    std::chrono::duration<double> startedTime = _lastUpdate - _lastStart;
    return (startedTime.count() * 1000);
}