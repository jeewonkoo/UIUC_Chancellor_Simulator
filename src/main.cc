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
Database* d = new Database();
Event* g = d->getEventbyID(1);
Event* f = d->getRandomEvent();


School* s = new School();
std::cout << s->GetReputation();
std::cout << f->id;
std::cout << g->id;

return 0;
    }
