/* 
 * File:   FriendsListApp.cpp
 * Author: mdey
 *
 * Created on June 21, 2017, 9:14 AM
 */

#include <cstdlib>
#include <iostream>
#include "Friend.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::cout<<"FriendsListApp is running"<<endl;
    
    Friend myFriend;
    Friend Mike("Mike", "Dey", "405-496-0272");
    
    return 0;
}

