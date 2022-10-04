#ifndef NOTE_HPP_INCLUDED
#define NOTE_HPP_INCLUDED

#include <string>
#include <chrono>
#include <map>
#include <fstream>
#include <string>

class Note
{
    public:
    Note(){}

    Note(std::string txt)
    {

    }

    void setReminder(std::chrono::year_month_day ymd)
    {

    }

    void read()
    {
        std::ifstream file("test.txt");
        std::string dat, note;
        std::ifstream ffile("timers.txt");
        while(!file.eof())
        {
            file >> dat;
            ffile >> note;
            
        }
    }

    private:
    std::map<std::chrono::system_clock, std::string> map;
};
#endif