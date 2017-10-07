//
//  main.cpp
//  basic
//
//  Created by Joshua Crum on 10/1/17.
//  Copyright © 2017 Joshua Crum. All rights reserved.
//

#include "Concert.h"
#include <iostream>
#include <ctime>

//COMPILE WITH C++ 11!!!

int main(int argc, const char * argv[]) {
    
    std::vector<std::string> friends1 = {"Patton", "Pual"};
    std::vector<std::string> friends2 = {"Kyle", "Dan"};
    
    std::tm date1;
    date1.tm_mday = 11;
    date1.tm_mon = 0;
    date1.tm_year = 2017;
    
    std::tm date2;
    date2.tm_mday = 9;
    date2.tm_mon = 2;
    date2.tm_year = 2016;
    
    Concert c1 = Concert("A7X", friends1, 8, date1);
    Concert c2 = Concert("Volbeat", friends2, 5, date2);
    
    std::vector<Concert> c_list = {c2, c1}; //Why is this size 24?
    
    for (int i = 0; i < sizeof(c_list); i++) {
//        std::cout << c_list[i].getName() << "\n"; //Does not call concert name for some reason.
        std::cout << i << "\n";
    }
    
    return 0;
}
