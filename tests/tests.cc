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
    SECTION("REMOVE WHEN IT IS EMPTY"){
        School s;
        // EXPECT_THROW({
        //     try{
        //         s.RemoveFaculty("Professor Nowak");
        //     }
        //     catch(const MyException& e){
        //         EXPECT_STREQ("Faculty is empty", e.what());
        //         throw;
        //     }
        // }), MyException);   
    }

    SECTION("REMOVE WHEN NON_EXIST FACULTY") {
        School s; 
        s.AddFaculty("Professor Nowak");
        s.AddFaculty("Professor Greg");
        s.AddFaculty("Professor Lee");
        s.RemoveFaculty("Professor Koo");
        // REQUIRE(ExpectedThrow("There is no faculty"));
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
    REQUIRE(s==v);
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

TEST_CASE("CHECKING EVENT IMPACT") {
Database* database = new Database();
Event* curr = database->getRandomEvent();

School* school = new School();
    school->Decide(curr);
    if (curr->AddRemove) {
        bool add = true;
        for (int a=0; a<school->GetFacultySize(); ++a) {
            if (curr->faculty==school->GetFaculty()[a]) {
                school->RemoveFaculty(curr->faculty);
                add = false;
            }
        }
        if (add) {
            school->AddFaculty(curr->faculty);
        }
    }
    REQUIRE(t == 3);
} 