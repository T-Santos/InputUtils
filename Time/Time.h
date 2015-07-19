#ifndef TIME_H
#define TIME_H

#include <string>
#include <iostream>

#include "C:\Users\TSANTOS\Documents\GitHub\InputUtils\Integer\IntegerInput.h"

class Time
{
    public:
        Time();
        //Time(std::string newTime);
        virtual ~Time();

        //bool SetTime(std::string newTime);
        bool QueryForTime();

        //bool SetHours(int Hours);
        //void GetHours();

        //bool SetMinutes(int Minutes);
        //void GetMinutes();

        //bool SetPeriod(std::string newPeriod);
        //void GetPeriod();

        void GetTime();
        void GetTimeWords();

    protected:
    private:

        bool IsValidPeriod(const std::string&);
        std::string PeriodExternal(const std::string);

        char period;
        int hours;
        int minutes;
        std::string strHours;
        std::string strMinutes;
        std::string strPeriod;

};

#endif // TIME_H
