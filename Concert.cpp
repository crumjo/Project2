//
//  Concert.cpp
//  basic
//
//  Created by Joshua Crum on 10/4/17.
//  Copyright © 2017 Joshua Crum. All rights reserved.
//

#include "Concert.h"
#include <ctime>
#include <string>
#include <vector>

std::string concertName;
std::vector<std::string> friends;
int desire;
std::tm date;



Concert::Concert() {
    concertName = "None";
    friends = [""];
    desire = 0;
    date = { .tm_mday = 1 }; //FIX ME
}


Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date) {
    this -> concertName = concertName;
    this -> friends = friends;
    this -> desire = desire;
    this -> date = date;
}
