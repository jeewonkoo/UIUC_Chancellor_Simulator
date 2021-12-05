#ifndef CATCH_CONFIG_MAIN
#  define CATCH_CONFIG_MAIN
#endif

#include "catch.hpp"

#include <stdexcept>

#include "database.hpp"
#include "event.hpp"
#include "monthlyReport.hpp"
#include "school.hpp"

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

    SECTION("REMOVE WHEN IT IS EMPTY"){
        School s;
        wchar_t message[200];
        try {
            s.RemoveFaculty("Professor Nowak");
            _swprintf(message, L"No exception for input %g", v);
            Assert::Fail(message, LINE_INFO());
        }
        catch (std::invalid_argument ex) {
            continue;
        }
        catch (std::out_of_range ex) {
            _swprintf(message, L"Incorrect exception for %g", v);
            Assert::Fail(message, LINE_INFO());
        }
    }

    SECTION("REMOVE WHEN NON_EXIST FACULTY") {
        School s; 
        s.AddFaculty("Professor Nowak");
        s.AddFaculty("Professor Greg");
        s.AddFaculty("Professor Lee");
        try {
            s.RemoveFaculty("Professor Koo");
            _swprintf(message, L"No exception for input %g", v);
            Assert::Fail(message, LINE_INFO());
        }
        catch (std::invalid_argument ex) {
            continue;
        }
        catch (std::out_of_range ex) {
            _swprintf(message, L"Incorrect exception for %g", v);
            Assert::Fail(message, LINE_INFO());
        }
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
    REQUIRE(s.GetFunding() == 0);
    REQUIRE_FALSE(s.GetFunding() == 100);
}

TEST_CASE("GET REPUTATION") {
    School s;
    REQUIRE(s.GetReputation() == 0);
    REQUIRE_FALSE(s.GetReputation() == 100);
}

TEST_CASE("GET STUDENT_LIFE") {
    School s;
    REQUIRE(s.GetStudent_life() == 0);
    REQUIRE_FALSE(s.GetStudent_life() == 100);
}

TEST_CASE("GET MONTHLY REPORT") {
    School s;
    MonthlyReport mthly_report = {
        0, // ranking
        0, // funding
        0, //student_life
        0, //alumni_donation
        0, // month
        0, //funding different
        0, //student life diff
        ""; // progress
        ""; //breaking news
    };
    MonthlyReport monthly_report = s.GetMonthlyReport();
    REQUIRE(mthly_report == monthly_report);
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
