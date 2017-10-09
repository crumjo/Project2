/*****************************************************************
 Main method demostrating creation and sorting of concert
 instances.
 Compile With C++ 11.
 Command: g++ -std=c++11 Concert.cpp main.cpp -o conc
 
 @author Joshua Crum & Patton Finley
 @version 9 October 2017
 *****************************************************************/

#include "Concert.h"
#include <iostream>
#include <ctime>
#include <algorithm>



/*****************************************************************
 Overloaded ostream << operator to print every element of vector.
 *****************************************************************/
std::ostream& operator<<(std::ostream& out,
                         std::vector<Concert> &list) {
    
    int size = (int)list.size();
    std::string concerts = "";
    
    for (int i = 0; i < size; i++) {
        std::string temp = list[i].getName() + ":  " +
        std::to_string(list[i].getDate().tm_mon) + "/" +
        std::to_string(list[i].getDate().tm_mday) + "/" +
        std::to_string(list[i].getDate().tm_year) +
        "  Desire: " + std::to_string(list[i].getDesire()) +
        "\n\n";
        
        concerts.append(temp);
    }
    
    out << concerts;
    
    return out;
}


/*****************************************************************
 Main method that creates ten concert objects, puts them into a
 vector, and sorts them.
 *****************************************************************/
int main(int argc, const char * argv[]) {

    std::vector<std::string> friends1 = {"Patton", "Pual"};
    std::vector<std::string> friends2 = {"Kyle", "Dan"};
    std::vector<std::string> friends3 = {"Me", "Myself", "I"};
    std::vector<std::string> friends4 = {"Talia", "Caitlin",
        "Chris", "Mike"};
    std::vector<std::string> friends5 = {"Patton", "Josh", "Pual"};
    std::vector<std::string> friends6 = {"Fred", "Shaggy", "Daphne",
        "Velma", "Scooby"};
    std::vector<std::string> friends7 = {"Micheal", "Josh",
        "Justin"};
    std::vector<std::string> friends8 = {"Kyle", "Clyde", "Stan"};
    std::vector<std::string> friends9 = {"Rick", "Morty"};
    std::vector<std::string> friends10 = {"Dylan", "Sara", "Tara"};

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
    date4.tm_mday = 31;
    date4.tm_mon = 10;
    date4.tm_year = 2017;

    std::tm date5;
    date5.tm_mday = 2;
    date5.tm_mon = 2;
    date5.tm_year = 2022;

    std::tm date6;
    date6.tm_mday = 20;
    date6.tm_mon = 7;
    date6.tm_year = 2017;

    std::tm date7;
    date7.tm_mday = 16;
    date7.tm_mon = 10;
    date7.tm_year = 2019;

    std::tm date8;
    date8.tm_mday = 10;
    date8.tm_mon = 10;
    date8.tm_year = 2020;

    std::tm date9;
    date9.tm_mday = 17;
    date9.tm_mon = 12;
    date9.tm_year = 2017;

    Concert c1 = Concert("A7X", friends1, 8, date1);
    Concert c2 = Concert("Volbeat", friends2, 6, date2);
    Concert c3 = Concert("Jimmy Hendrix", friends3, 7, date3);
    Concert c4 = Concert("Pentonix", friends4, 4, date4);
    Concert c5 = Concert("Cake", friends5, 5, date5);
    Concert c6 = Concert("Rush", friends6, 8, date6);
    Concert c7 = Concert("21 Pilots", friends7, 2, date7);
    Concert c8 = Concert("Paramore", friends8, 3, date8);
    Concert c9 = Concert("Dirty Heads", friends9, 9, date9);
    Concert c10 = Concert("Aerosmith", friends10, 3, date9);

    std::vector<Concert> c_list {c3, c1, c2, c8, c5, c4, c6, c7, c10, c9};
    std::sort (c_list.begin(), c_list.end());
    std::cout << c_list;

    return 0;
}
