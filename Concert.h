/*****************************************************************
 Header file containing all the methods associated with the
 concert class.
 
 @author Joshua Crum & Patton Finley
 @version 9 October 2017
 *****************************************************************/

#ifndef Concert_h
#define Concert_h
#endif /** Concert_h */

#include <ctime>
#include <string>
#include <vector>



/*****************************************************************
 Class representing a concert with a name, list of friends going,
 a desire to go to the concert (represented as an integer), and
 the date of the concert.
 *****************************************************************/
class Concert {
    
    public:
    
        /** Empty constructor */
        Concert();
    
        Concert(std::string concertName, std::vector<std::string>
                friends, int desire, std::tm date);
    
        /** Getters */
        std::string getName();
        std::vector<std::string> getFriends();
        int getDesire();
        std::tm getDate();
    
        /** Setters */
        void setName(std::string concertName);
        void setFriends(std::vector<std::string>);
        int setDesire(int desire);
        void setDate(std::tm date);
        bool operator<(const Concert& other) const;
    
    private:
    
        std::string concertName;
        std::vector<std::string> friends;
        int desire;
        std::tm date;
    
};
