#include <vector>
#include <set>

#include "event.hpp"
#include </usr/include/mysql_connection.h>
#include "/usr/include/cppconn/driver.h"
#include </usr/include/cppconn/exception.h>
#include </usr/include/cppconn/resultset.h>
#include </usr/include/cppconn/statement.h>
class Database {
public:

  Database();
 Event* getRandomEvent();
 Event* getEventbyID(int id);
private:
    sql::Driver *driver;
    sql::Connection *con;
	sql::Statement *stmt;
	sql::ResultSet *result;
	std::set<int> visited_ids;

};
