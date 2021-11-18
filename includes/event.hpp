#ifndef EVENT_HPP
#define EVENT_HPP
#include <string>
#include <map>
#include <vector>
struct Event{
    int id;
    std::string text;
    std::map<int, std::vector<int>> impact;
    // std::string option1;
    // int funding1;
    // int reputation1;
    // int student_life1;

    bool AddRemove; 
    std::string faculty;

    int  futureEventID;
    Event* futureEvent;

};
#endif