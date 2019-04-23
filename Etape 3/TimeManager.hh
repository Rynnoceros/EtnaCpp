#ifndef __TIME_MANAGER_HH__
#define __TIME_MANAGER_HH__
#include <chrono>

class TimeManager {
    private:
        std::chrono::system_clock::time_point _lastStart;
        std::chrono::system_clock::time_point _lastUpdate;
        std::chrono::duration<double> _elapsedTime;
        std::chrono::duration<double> _elapsedStart;
        TimeManager();

    protected:
        virtual ~TimeManager();
        void Start();
        void Update();
        unsigned int GetElapsedTime() const;
        unsigned int GetStartedTime() const;

    public:
        TimeManager(const TimeManager&) = delete;
        TimeManager& operator=(const TimeManager&) = delete;
        static TimeManager &GetInstance() {
            static TimeManager _instance;
            return _instance;
        };
};
#endif