#include "TimeTracker.h"
#include <unistd.h>
#include <map>
#include <numeric>
#include <cstdint>

namespace
{
    struct TrackRecord
    {
        uint64_t m_exec_time;
        uint32_t m_nbr_accesses;
        uint64_t m_overall_time_us;
 
    };

    static std::map<std::string, TrackRecord>map; 
    
}

void print_stats(){
        for (auto& entry: map) {
        	std::cout<<"Func. name: "<<entry.first<< std::endl 
                 	  <<"Number of function calls: " <<entry.second.m_nbr_accesses<<std::endl
                 	  <<"Total time: " << entry.second.m_overall_time_us<<std::endl
                 	  <<"Average time: "<< entry.second.m_overall_time_us / entry.second.m_nbr_accesses <<std::endl<<std::endl;
    	}
}




TimeTracker::TimeTracker(const std::string &str) :  
    m_start {std::chrono::steady_clock::now()}, m_func_name{str} {}

TimeTracker::~TimeTracker(){
    
    auto currentTime = std::chrono::steady_clock::now();        
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(currentTime - m_start);
    map[m_func_name].m_exec_time = duration.count();
    map[m_func_name].m_overall_time_us +=  map[m_func_name].m_exec_time;
    map[m_func_name].m_nbr_accesses++;    
	                              
}



