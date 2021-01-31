#ifndef TIMETRACKER_H
#define TIMETRACKER_H



#include<iostream>
#include<vector>
#include<chrono>



class TimeTracker{
    private:
        std::chrono::time_point<std::chrono::steady_clock>m_start;
        std::string m_func_name;
        

    public: 
    
    /*c-tor , d-tor*/
    
        TimeTracker(const std::string &str);
       ~TimeTracker();
        
        
        
    
};
void print_stats();
#endif
