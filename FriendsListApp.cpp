/* 
 * File:   FriendsListApp.cpp
 * Author: mdey
 *
 * Created on June 21, 2017, 9:14 AM
 */

#include <cstdlib>
#include <iostream>
#include <array>
#include "Friend.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::cout<<"FriendsListApp is running"<<endl;
    
    Friend Mike("Mike", "Dey", "801-496-0272");
    Friend Joe("Joe", "Adams", "801-683-0332");
    Friend Steve("Steve", "Bruce", "435-282-7745");
    Friend Daisy("Daisy", "Harris", "801-224-3677");
    
    //std::cout<<"Display: " << Mike.display()<<endl;
    
    const size_t SIZE = 4; //holds the size of the array    
    array <Friend, SIZE> myFriends;
    
    //int size = 4;
    //Friend myFriends[4] = {Mike, Joe, Steve, Daisy};
    
    return 0;
}

