#ifndef SCHOOL_HPP
#define SCHOOL_HPP
#include <string>
#include <vector>


class School {
    public:
    School(std::string str);
    std::vector<std::string> GetFaculty();
    void AddFaculty();
    void RemoveFaculty();
	int GetFunding();
	int GetReputation();
	int GetStudent_life();
	void SetFunding();
	void SetReputation();
	void SetStudent_life();
    void Decide();
    void SeeFaculty();
    void GetMonthlyReport();

    private:
    int funding_;
    int reputation_;
    int student_life_;
    std::vector<std::string> faculty_;



};
#endif