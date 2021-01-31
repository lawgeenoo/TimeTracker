#include<iostream>
#include "TimeTracker.h"
#include<unistd.h>

void fa_ceva();
void abc();

    

// main driver
 int main()
 {
 
    abc();
    print_stats();
    return 0;
 }
 
 // do something
 void fa_ceva(){
	usleep(200);
	
}

void abc() {
    auto track = TimeTracker(__PRETTY_FUNCTION__);
    
for(int i =0; i < 10; i++)
    {
        //TimeTracker object creation, terminates and end of scope unless destructor explicitly called.
        auto m_track2 = TimeTracker("abc2");
         fa_ceva();
	 
    }

}
