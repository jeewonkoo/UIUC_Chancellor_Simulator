#include "../includes/school.hpp"

std::vector<std::string> School::GetFaculty(){return faculty_;}
void School::AddFaculty(std::string name){faculty_.push_back(name);}
void School::RemoveFaculty(std::string name){
    if (faculty_.size() == 0) {
        throw std::invalid_argument("Facuty is empty");
    }
    if (!(std::find(faculty_.begin(), faculty_.end(), name) != faculty_.end())){
        throw std::invalid_argument("There is no faculty");
    } 
    for (size_t a=0; a<faculty_.size(); ++a) {
        if (faculty_[a]==name) {
            faculty_.erase(faculty_.begin()+a);
            break;
        }
    }
}
int School::GetFacultySize(){return faculty_.size();}
int School::GetFunding(){return funding_;}
int School::GetReputation(){return reputation_;}
int School::GetStudent_life(){return student_life_;}
void School::SetFunding(int funding){ funding_=funding;}
void School::SetReputation(int reputation){reputation_=reputation;}
void School::SetStudent_life(int student_life){student_life_=student_life;}

void School::Decide(Event* event){
    int user_input;
    std::cout<<std::endl<<event->text<<std::endl;
    std::cin >> user_input;
    std::vector<int> tmp = event->impact[user_input];
    funding_+= tmp[0];
    reputation_ += tmp[1];
    student_life_+=tmp[2];
    if (funding_>=0) {
        std::cout<< "$"<<tmp[0] << " amount of funding successfully added"<<std::endl;
    }
    else if (reputation_>=0) {
        std::cout<< "School reputation is increased by "<< tmp[1]<<std::endl;
    }
    else if (student_life_>=0) {
        std::cout<<"Student life is increased by " << tmp[2]<<std::endl;
    }
    if (funding_<0) {
        std::cout<<"sucker u fkup the school funding"<<std::endl;
    }
    else if (reputation_<0) {
        std::cout<<"reputation death path"<<std::endl;
    }
    else if (student_life_<0) {
        std::cout<<"students can no longer tolerate what u have done, they decided to execute u"<<std::endl;
    }
}
void School::SeeFaculty(){
    for (size_t a=0; a<faculty_.size(); ++a) {
        std::cout<<faculty_[a]<<std::endl;
    }
}
MonthlyReport School::GetMonthlyReport(){ return monthly_report_; }
