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
#include <algorithm>


//COMPILE WITH C++ 11!!!
//Command: g++ -std=c++11 Concert.cpp main.cpp -o conc

int main(int argc, const char * argv[]) {

    std::vector<std::string> friends1 = {"Patton", "Pual"};
    std::vector<std::string> friends2 = {"Kyle", "Dan"};
    std::vector<std::string> friends3 = {"Me", "Myself", "I"};
    std::vector<std::string> friends4 = {"Talia", "Caitlin","Chris","Mike"};
    std::vector<std::string> friends5 = {"Patton", "Josh","Pual"};
    std::vector<std::string> friends6 = {"Fred", "Shaggy","Daphne", "Velma","Scooby"};
    std::vector<std::string> friends7 = {"Micheal","Josh","Justin"};
    std::vector<std::string> friends8 = {"Kyle", "Clyde", "Stan"};
    std::vector<std::string> friends9 = {"Rick","Morty"};
    std::vector<std::string> friends10 = {"Dylan","Sara","Tara"};

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

    std::tm date4;
    date3.tm_mday = 31;
    date3.tm_mon = 10;
    date3.tm_year = 2017;

    std::tm date5;
    date3.tm_mday = 2;
    date3.tm_mon = 2;
    date3.tm_year = 2022;

    std::tm date6;
    date3.tm_mday = 20;
    date3.tm_mon = 7;
    date3.tm_year = 2017;

    std::tm date7;
    date3.tm_mday = 16;
    date3.tm_mon = 10;
    date3.tm_year = 2019;

    std::tm date8;
    date3.tm_mday = 10;
    date3.tm_mon = 10;
    date3.tm_year = 2020;

    std::tm date9;
    date3.tm_mday = 17;
    date3.tm_mon = 12;
    date3.tm_year = 2017;

    std::tm date10;
    date3.tm_mday = 20;
    date3.tm_mon = 10;
    date3.tm_year = 2019;

    Concert c1 = Concert("A7X", friends1, 8, date1);
    Concert c2 = Concert("Volbeat", friends2, 6, date2);
    Concert c3 = Concert("Jimmy Hendrix", friends3, 7, date3);
    Concert c4 = Concert("Pentonix", friends4, 4, date4);
    Concert c5 = Concert("Cake", friends5, 5, date5);
    Concert c6 = Concert("Rush", friends6, 8, date6);
    Concert c7 = Concert("21 Pilots", friends7, 2, date7);
    Concert c8 = Concert("Paramore", friends8, 3, date8);
    Concert c9 = Concert("Dirty Heads", friends9, 9, date9);
    Concert c10 = Concert("Aerosmith", friends10, 3, date10);

    std::vector<Concert> c_list {c3, c1, c2, c8, c5, c4, c6, c7, c10, c9};

    std::cout << "Before Sort:\n\n";

    int size = (int)c_list.size();
    for (int i = 0; i < size; i++) {
        std::cout << c_list[i].getName() << "\n";
    }

    std::sort (c_list.begin(), c_list.end());

    std::cout << "\nAfter sort: \n\n";

    for (int i = 0; i < size; i++) {
        std::cout << c_list[i].getName() << "\n";
    }

    return 0;
}
