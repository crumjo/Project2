/*****************************************************************
 Class representing a concert with a name, list of friends going,
 a desire to go to the concert (represented as an integer), and
 the date of the concert. Also contains < operator overloading to
 compare two concert instances.
 
 @author Joshua Crum & Patton Finley
 @version 9 October 2017
 *****************************************************************/

#include "Concert.h"
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

/** Name of the concert. */
std::string concertName;

/** List of friends going. */
std::vector<std::string> friends;

/** Desire to see the concert. */
int desire;

/** Date of the concert. */
std::tm date;



/*****************************************************************
 Default constructor that creates an empty concert object.
 *****************************************************************/
Concert::Concert() {
    concertName = "None";
    friends = {"None"};
    desire = 0;
    date.tm_year = 0;
}


/*****************************************************************
 Constructor that creates a concert instance given a name, a list
 of friends going, desire to go, and the date of the concert.
 
 @param concertName the name of the concert as a string.
 @param friends a vector containing names of friends as strings.
 @param desire an integer representing desire to go.
 @param date the date of the concert as a std::tm struct.
 *****************************************************************/
Concert::Concert(std::string concertName, std::vector<std::string>
                 friends, int desire, std::tm date) {
    
    this -> concertName = concertName;
    this -> friends = friends;
    this -> desire = desire;
    this -> date = date;
}


/*****************************************************************
 Getter for the name of the concert.
 
 @return string the name of the concert.
 *****************************************************************/
std::string Concert::getName() {
    return concertName;
}


/*****************************************************************
 Getter for the list of friends.
 
 @return std::vector<std::string> the list of friends.
 *****************************************************************/
std::vector<std::string>  Concert::getFriends() {
    return friends;
}


/*****************************************************************
 Getter for the desire to go to the concert.
 
 @return int the desire to go.
 *****************************************************************/
int  Concert::getDesire() {
    return desire;
}


/*****************************************************************
 Getter for the date of the concert.
 
 @return std::tm the date of the concert.
 *****************************************************************/
std::tm  Concert::getDate() {
    return date;
}


/*****************************************************************
 Sets the name of the concert.
 
 @param concertName the name of the concert.
 *****************************************************************/
void  Concert::setName(std::string concertName) {
    concertName = concertName;
}


/*****************************************************************
 Sets the list of friends using another vector of strings.
 
 @param friends the list of friends to set.
 *****************************************************************/
void  Concert::setFriends(std::vector<std::string> friends) {
    friends = friends;
}


/*****************************************************************
 Sets the date of the concert.
 
 @param desire the desire to go represented as an int.
 *****************************************************************/
void   setDesire(int desire) {
    desire = desire;
}


/*****************************************************************
 Sets the date of the concert.
 
 @param date the new date of the concert.
 *****************************************************************/
void  Concert::setDate(std::tm date) {
    date = date;
}


/*****************************************************************
 Overload method for the < operator. Compares two concerts where
 the lesser one has an earlier date. If the dates are the same,
 the one with less desier is the lesser concert.
 
 @param other the concert to compare to.
 @return bool true if 'this' concert is less than the other.
 *****************************************************************/
bool Concert::operator<(const Concert& other) const {
    
    if (this -> date.tm_year != other.date.tm_year) {
        return (this -> date.tm_year < other.date.tm_year);
        
    } else if (this -> date.tm_mon != other.date.tm_mon) {
        return (this -> date.tm_mon < other.date.tm_mon);
    
    } else if (this -> date.tm_mday != other.date.tm_mday) {
        return (this -> date.tm_mday < other.date.tm_mday);
    
    } else if (this -> desire > other.desire) {
        return (this -> desire > other.desire);
    }

    return false;
}



