//
//  Student.h
//  basic
//
//  Created by Joshua Crum on 10/4/17.
//  Copyright © 2017 Joshua Crum. All rights reserved.
//

#ifndef Student_h
#define Student_h

#endif /* Student_hpp */

#include <string>
#include <vector>

class Concert {
    
    public:
    
        /** Empty constructor */
        Concert();
    
        Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date);
    
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
    
    private:
    
        std::string concertName;
        std::vector<std::string> friends;
        int desire;
        std::tm date;
    
};
