#ifndef __TIME_MANAGER_HH__
#define __TIME_MANAGER_HH__
#include <chrono>

class TimeManager {
    private:
        std::chrono::system_clock::time_point _lastStart = std::chrono::system_clock::time_point::min();
        std::chrono::system_clock::time_point _lastUpdate = std::chrono::system_clock::time_point::min();
        std::chrono::duration<double> _elapsedTime = std::chrono::duration<double>::min();
        std::chrono::duration<double> _elapsedStart = std::chrono::duration<double>::min();
        TimeManager();

    public:
        virtual ~TimeManager();
        void Start();
        void Update();
        unsigned int GetElapsedTime() const;
        unsigned int GetStartedTime() const;
        TimeManager(const TimeManager&) = delete;
        TimeManager& operator=(const TimeManager&) = delete;
        static TimeManager &GetInstance() {
            static TimeManager _instance;
            return _instance;
        };
};
#endif