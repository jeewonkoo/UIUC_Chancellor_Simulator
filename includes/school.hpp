#ifndef SCHOOL_HPP
#define SCHOOL_HPP
#include"event.hpp"

#include "monthlyReport.hpp"
#include <iostream>
#include <queue>

class School {
    public:
    School() = default;
    std::vector<std::string> GetFaculty();
    void AddFaculty(std::string name);
    void RemoveFaculty(std::string name);
	int GetFunding();
	int GetReputation();
	int GetStudent_life();
	void SetFunding(int funding);
	void SetReputation(int reputation);
	void SetStudent_life(int student_life);
    void Decide(Event* event);
    void SeeFaculty();
    MonthlyReport GetMonthlyReport();

    private:
    int funding_=0;
    int reputation_=0;
    int student_life_=0;
    std::vector<std::string> faculty_;
    MonthlyReport monthly_report_;



};
#endif