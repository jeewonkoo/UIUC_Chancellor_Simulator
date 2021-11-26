#ifndef EVENT_HPP
#define EVENT_HPP
#include <string>
#include <map>
#include <vector>
struct Event{
    int id =-1;
    std::string text ="";
       std::map<int, std::vector<int>> impact = {   {1, {0,0,0,0,0}},{ 2, {0,0,0,0,0}}, {3, {0,0,0,0,0}} };

    //  int funding1;
    // int funding2;
    // int funding3;
    // int studentlife1;
    // int studentlife2;
    // int studentlife3;

    // int reputation1;
    // int reputation2;
    // int reputation3;
//     int  future1;
//     int  future2;
//     int  future3;

// int m1;
// int m2;
// int m3;



    bool AddRemove = false;
    std::string faculty ="";

   
};
#endif