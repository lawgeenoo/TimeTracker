#include<iostream>
#include "TimeTracker.h"
#include<unistd.h>

void fa_ceva();
void abc();

    

 
 int main()
 {
 
    abc();
    print_stats();
    return 0;
 }
 
 
 void fa_ceva(){
	usleep(200);
	
}

void abc() {
    auto track = TimeTracker(__PRETTY_FUNCTION__);
    
for(int i =0; i < 10; i++)
    {
         auto track2 = TimeTracker("abc2");
         fa_ceva();
	 
    }

}
