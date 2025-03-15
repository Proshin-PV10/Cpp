#include <iostream>
#include "Time.h"

int main() {
      
    const Time time1(11, 59, 59);
    const Time time2(1, 70, 80);    
    Time time3;    
    time3 = time1.addTime(time2); 

    std::cout << "time1 ";
    time1.display();
    
    std::cout << "time2 ";
    time2.display();
      
    std::cout << "time3 ";
    time3.display();
    

    return 0;
}
