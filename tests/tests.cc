#ifndef CATCH_CONFIG_MAIN
#  define CATCH_CONFIG_MAIN
#endif

#include "catch.hpp"

#include <stdexcept>

#include "database.hpp"
#include "event.hpp"
#include "monthlyReport.hpp"
#include "school.hpp"
#include <iostream>

using namespace std;

TEST_CASE("ADD FACULTY") {
    School s; 
    s.AddFaculty("Professor Nowak");
    s.AddFaculty("Professor Greg");
    s.AddFaculty("Professor Lee");
    REQUIRE(s.GetFacultySize()==3);
    REQUIRE_FALSE(s.GetFacultySize()==5);
}

TEST_CASE("REMOVE FACULTY") { 

    SECTION("REMOVE WHEN IT IS NOT EMPTY") {
        School s; 
        s.AddFaculty("Professor Nowak");
        s.AddFaculty("Professor Greg");
        s.AddFaculty("Professor Lee");
        s.RemoveFaculty("Professor Nowak");
        REQUIRE(s.GetFacultySize()==2);
        REQUIRE_FALSE(s.GetFacultySize()==3);
    }
}

TEST_CASE("GET FACULTY") {
    School s; 
    std::vector<std::string> v;
    v.push_back("Professor Nowak");
    v.push_back("Professor Greg");
    v.push_back("Professor Lee");
    s.AddFaculty("Professor Nowak");
    s.AddFaculty("Professor Greg");
    s.AddFaculty("Professor Lee");
    REQUIRE(s.GetFaculty()==v);
}   

TEST_CASE("GET FUNDING") {
    School s;
    REQUIRE(s.GetFunding() == 100);
    REQUIRE_FALSE(s.GetFunding() == 0);
}

TEST_CASE("GET REPUTATION") {
    School s;
    REQUIRE(s.GetReputation() == 100);
    REQUIRE_FALSE(s.GetReputation() == 0);
}

TEST_CASE("GET STUDENT_LIFE") {
    School s;
    REQUIRE(s.GetStudent_life() == 100);
    REQUIRE_FALSE(s.GetStudent_life() == 0);
}



TEST_CASE("SET FUNDING") {
    School s;
    int funding = 100;
    s.SetFunding(funding);
    REQUIRE(s.GetFunding() == 100);
    REQUIRE_FALSE(s.GetFunding()== 0);
}

TEST_CASE("SET REPUTATION") {
    School s; 
    int reputation = 100;
    s.SetReputation(reputation);
    REQUIRE(s.GetFunding() == 100);
    REQUIRE_FALSE(s.GetFunding()== 0);
}

TEST_CASE("SET STUDENT_LIFE") {
    School s; 
    int student_life = 100;
    s.SetStudent_life(student_life);
    REQUIRE(s.GetStudent_life() == 100);
    REQUIRE_FALSE(s.GetStudent_life()== 0);
}

//If event is not repeatable but called twice, false 

TEST_CASE("GET FACULTY SIZE") {
    School s; 
    s.AddFaculty("Professor Nowak");
    s.AddFaculty("Professor Greg");
    s.AddFaculty("Professor Lee");
    int t = s.GetFacultySize();
    REQUIRE(t == 3);
} 

TEST_CASE("GETRANDOM"){

Database* database = new Database();
Event* curr = database->getRandomEvent();

REQUIRE(curr->id != -1);
REQUIRE(curr->text != "");


}


TEST_CASE("GETByID"){

Database* database = new Database();
Event* curr = database->getEventbyID(6);

REQUIRE(curr->id == 6);
REQUIRE(curr->impact[1][0] == -10);
REQUIRE(curr->faculty == "null");


}

TEST_CASE("GETByID Not Found"){

Database* database = new Database();
Event* curr = database->getEventbyID(99999);

REQUIRE(curr->id == -1);



}