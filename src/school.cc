#include "../includes/school.hpp"

std::vector<std::string> School::GetFaculty(){return faculty_;}
void School::AddFaculty(std::string name){faculty_.push_back(name);}
void School::RemoveFaculty(std::string name){
    for (size_t a=0; a<faculty_.size(); ++a) {
        if (faculty_[a]==name) {
            faculty_.erase(faculty_.begin()+a);
            break;
        }
    }
}
int School::GetFunding(){return funding_;}
int School::GetReputation(){return reputation_;}
int School::GetStudent_life(){return student_life_;}
void School::SetFunding(int funding){ funding_=funding;}
void School::SetReputation(int reputation){reputation_=reputation;}
void School::SetStudent_life(int student_life){student_life_=student_life;}
void School::Decide(){}
void School::SeeFaculty(){}
void School::GetMonthlyReport(){}


//trying to creat own branch