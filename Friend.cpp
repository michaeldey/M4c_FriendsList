/* 
 * File:   Friend.cpp
 * Author: mdey
 * 
 * Created on June 21, 2017, 9:37 AM
 */

#include "Friend.h"

Friend::Friend() {
    deleted = false;
    std::cout<<"Friend has been created"<<endl;
}

Friend::Friend(string fName, string lName, string cell) {
    deleted = false;
    setFName(fName);
    setLName(lName);
    setCell(cell);
    std::cout<<getFName()<<" "<<getLName()<<" ("<<getCell()<<") has been created."<<endl;
}

void Friend::setCell(string cell) 
{
    cellPhone = cell;
}
