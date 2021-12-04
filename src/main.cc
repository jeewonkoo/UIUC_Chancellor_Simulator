#include "../includes/school.hpp"

#include "../includes/database.hpp"
#include <string>
#include <iostream>
#include </usr/include/mysql_connection.h>
#include "/usr/include/cppconn/driver.h"
#include </usr/include/cppconn/exception.h>
#include </usr/include/cppconn/resultset.h>
#include </usr/include/cppconn/statement.h>
using namespace std;
int main() {
Database* database = new Database();
Event* curr = database->getRandomEvent();

School* school = new School();

while (curr&&school->GetFunding()>=0&&school->GetReputation()>=0&&school->GetStudent_life()>=0) {
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
    curr = database->getRandomEvent();
}

return 0;
    }
