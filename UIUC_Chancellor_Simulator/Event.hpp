#include <string>
using namespace std;

struct Event{
    int id;
    string text;
    int 1_funding;
    int 1_reputation;
    int 1_student_life;

    int 2_funding;
    int 2_reputation;
    int 2_student_life;

    bool AddRemove; 
    string faculty;


    double multiplier1;
    int  futureEventID1;
    Event* futureEvent1;

    double multiplier2;
    int  futureEventID2;
    Event* futureEvent2;

};
