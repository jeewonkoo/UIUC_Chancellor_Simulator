#ifndef MONTHLYREPORT_HPP
#define MONTHLYREPORT_HPP

#include <string>

struct MonthlyReport {
    int ranking = 0; 
    int funding = 0;
    int student_life = 0;
    int alumni_donation = 0; 

    int month = 0; //number of months or play days 

    //show that user can simply check the amount of factor increased or decreased 
	//more like total difference from previous monthly report 
	int funding_diff = 0; //(amount of funding increased or decreased)
	int studnent_life_diff = 0;   //(amount of student life increased or decreased)
	int ranking_diff = 0;
	//if all factors increased, like good job keep it up
	//if all factors decreased, Be better chancellor 
	std::string progress = "";	

	std::string breaking_news = ""; //shows events that had biggest impact on factors 
	//for example, if Micheal Nowak and his research team received award impacts the most, 
    //“BREAKING NEWS: Professor Nowak and his research team received ABC awad"

};

#endif

// creating own branch
