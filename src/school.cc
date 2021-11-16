#include "../includes/school.hpp"


School::School(std::string str):funding_(0),reputation_(0),student_life_(0){
    faculty_.push_back(str);
}

std::vector<std::string> School::GetFaculty(){return faculty_;}
void School::AddFaculty(){}
void School::RemoveFaculty(){}
int School::GetFunding(){return funding_;}
int School::GetReputation(){return reputation_;}
int School::GetStudent_life(){return student_life_;}
void School::SetFunding(){ funding_=1;}
void School::SetReputation(){}
void School::SetStudent_life(){}
void School::Decide(){}
void School::SeeFaculty(){}
void School::GetMonthlyReport(){}