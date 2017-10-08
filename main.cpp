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
//Command: g++ -std=c++11 Concert.cpp main.cpp -o conc

int main(int argc, const char * argv[]) {
    
    std::vector<std::string> friends1 = {"Patton", "Pual"};
    std::vector<std::string> friends2 = {"Kyle", "Dan"};
    std::vector<std::string> friends3 = {"Me", "Myself", "I"};
    
    std::tm date1;
    date1.tm_mday = 12;
    date1.tm_mon = 1;
    date1.tm_year = 2017;
    
    std::tm date2;
    date2.tm_mday = 11;
    date2.tm_mon = 1;
    date2.tm_year = 2017;
    
    std::tm date3;
    date3.tm_mday = 5;
    date3.tm_mon = 5;
    date3.tm_year = 2018;
    
    Concert c1 = Concert("A7X", friends1, 8, date1);
    Concert c2 = Concert("Volbeat", friends2, 6, date2);
    Concert c3 = Concert("Jimmy Hendrix", friends3, 7, date3);
    
    std::vector<Concert> c_list {c3, c1, c2};
    
    std::cout << "Before Sort:\n\n";
    
    int size = (int)c_list.size();
    for (int i = 0; i < size; i++) {
        std::cout << c_list[i].getName() << "\n";
    }    
    
    std::sort(c_list.begin(), c_list.end());
    
    std::cout << "\nAfter sort: \n\n";
    
    for (int i = 0; i < size; i++) {
        std::cout << c_list[i].getName() << "\n";
    }
    
    return 0;
}
