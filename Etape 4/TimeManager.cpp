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
    _previousUpdate = std::chrono::system_clock::time_point::min();
}

void TimeManager::Update() {
    std::time_t previous = std::chrono::system_clock::to_time_t(_previousUpdate);
    std::time_t last = std::chrono::system_clock::to_time_t(_lastUpdate);

    std::cout << " Update _previousUpdate: " << std::ctime(&previous) << std::endl;
    std::cout << " Update _lastUpdate: " << std::ctime(&last) << std::endl;
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