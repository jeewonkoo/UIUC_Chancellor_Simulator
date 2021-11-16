#ifndef SCHOOL_HPP
#define SCHOOL_HPP
#include"event.hpp"
#include "faculty.hpp"
#include "monthlyReport.hpp"

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
    void Decide();
    void SeeFaculty();
    void GetMonthlyReport();

    private:
    int funding_=0;
    int reputation_=0;
    int student_life_=0;
    std::vector<std::string> faculty_;



};
#endif