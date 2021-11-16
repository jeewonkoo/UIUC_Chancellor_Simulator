#ifndef FACULTY_HPP
#define FACULTY_HPP
#include <vector>
#include <string>


struct Faculty {
    std::string name;
    std::vector<std::string> title;
    int fundingRequired;	//increment or decrement by event 
    int reputation;		//stat for now 
    int student_life;
};
#endif