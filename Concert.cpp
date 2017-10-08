//
//  Concert.cpp
//  basic
//
//  Created by Joshua Crum on 10/4/17.
//  Copyright © 2017 Joshua Crum. All rights reserved.
//

#include "Concert.h"
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

std::string concertName;
std::vector<std::string> friends;
int desire;
std::tm date;



//Concert::Concert() {
//    concertName = "None";
//    friends = {""};
//    desire = 0;
//    date = { .tm_mday = 0 }; //FIX ME
//}


Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date) {
    this -> concertName = concertName;
    this -> friends = friends;
    this -> desire = desire;
    this -> date = date;
}


std::string Concert::getName() {
    return concertName;
}


std::vector<std::string>  Concert::getFriends() {
    return friends;
}


int  Concert::getDesire() {
    return desire;
}


std::tm  Concert::getDate() {
    return date;
}


void  Concert::setName(std::string concertName) {
    concertName = concertName;
}


void  Concert::setFriends(std::vector<std::string> friends) {
    friends = friends;
}


void   setDesire(int desire) {
    desire = desire;
}


void  Concert::setDate(std::tm date) {
    date = date;
}


bool Concert::operator<(const Concert& other) const {
    
    if (this -> date.tm_year != other.date.tm_year) {
        return (this -> date.tm_year < other.date.tm_year);
        
    } else if (this -> date.tm_mon < other.date.tm_mon) {
        return (this -> date.tm_mon < other.date.tm_mon);
    
    } else if (this -> date.tm_mday < other.date.tm_mday) {
        return (this -> date.tm_mday < other.date.tm_mday);
    
    } else if (this -> desire > other.desire) {
        return (this -> desire > other.desire);
    }

    return false;
}



