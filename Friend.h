/* 
 * File:   Friend.h
 * Author: mdey
 *
 * Created on June 21, 2017, 9:37 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Friend 
{
    public:
        Friend();
        Friend(string fName, string lName, string cell);
        void setFName(string fName);
        void setLName(string lName);
        void setCell(string cell);
        string getFName();
        string getLName();
        string getCell();
        
    private:
        string firstName;
        string lastName;
        string cellPhone;
        bool deleted;
    
};

