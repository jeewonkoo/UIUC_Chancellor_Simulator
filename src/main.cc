#include "../includes/school.hpp"
#include <iostream>

int main() {
    School school ("adbqwdqwo");
    std::cout<<school.GetFunding();
    school.SetFunding();
    std::cout<<school.GetFunding()<<std::endl;
    std::cout<<"random"<<std::endl;
    return 0;
}