#ifndef SCHOOL_HPP
#define SCHOOL_HPP
#include"event.hpp"

#include "monthlyReport.hpp"
#include <iostream>
#include <queue>
#include <algorithm>
class School {
    public:
    School() = default;
    std::vector<std::string> GetFaculty();
    void AddFaculty(std::string name);
    void RemoveFaculty(std::string name);
    int GetFacultySize();
	int GetFunding();
	int GetReputation();
	int GetStudent_life();
	void SetFunding(int funding);
	void SetReputation(int reputation);
	void SetStudent_life(int student_life);
    void Decide(Event* event);
    void SeeFaculty();
    int GetID();

    MonthlyReport GetMonthlyReport();

    private:
    int funding_=100;
    int reputation_=100;
    int student_life_=100;
    int nextID = -1;
    std::vector<std::string> faculty_;
    MonthlyReport monthly_report_;



};
#endif