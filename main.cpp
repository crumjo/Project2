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



int main(int argc, const char * argv[]) {
    
    std::vector<std::string> friends = {"Patton", "Pual"};
    std::tm date;
    
    date.tm_mday = 11;
    date.tm_mon = 0;
    date.tm_year = 1017;
    
    Concert("A7X", friends, 8, date);
    
    return 0;
}
