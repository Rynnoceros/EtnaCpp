#ifndef __TIME_MANAGER_HH__
#define __TIME_MANAGER_HH__
#include <chrono>

class TimeManager {
    private:
        std::chrono::system_clock::time_point _lastStart;
        std::chrono::system_clock::time_point _updateStart;
        std::chrono::system_clock::time_point _update;
        TimeManager();
        virtual ~TimeManager();

    public:
        void Start();
        void Update();
        unsigned int GetElapsedTime() const;
        unsigned int GetStartedTime() const;
        TimeManager(const TimeManager&) = delete;
        TimeManager& operator=(const TimeManager&) = delete;
        static TimeManager &GetInstance();
};
#endif