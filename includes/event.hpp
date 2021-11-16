#ifndef EVENT_HPP
#define EVENT_HPP
#include <string>


struct Event{
    int id;
    std::string text;
    int funding1;
    int reputation1;
    int student_life1;

    int funding2;
    int reputation2;
    int student_life2;

    bool AddRemove; 
    std::string faculty;


    double multiplier1;
    int  futureEventID1;
    Event* futureEvent1;

    double multiplier2;
    int  futureEventID2;
    Event* futureEvent2;

};
#endif