#include <vector>
#include <stdlib.h>
#include <iostream>
#include "../includes/event.hpp"
#include "../includes/database.hpp"

#include </usr/include/mysql_connection.h>
#include "/usr/include/cppconn/driver.h"
#include </usr/include/cppconn/exception.h>
#include </usr/include/cppconn/resultset.h>
#include </usr/include/cppconn/statement.h>
using namespace std;
using namespace sql;

const string server = "nowaktoewack.mysql.database.azure.com";
const string username = "nowack@nowaktoewack";
const string password = "T0ewaxxx";


 Database::Database(){



	try
	{
		driver = get_driver_instance();
		con = driver->connect(server, username, password);
	}
	catch (sql::SQLException e)
	{
		cout << "Could not connect to server. Error message: " << e.what() << endl;
		system("pause");
		exit(1);
	}

	con->setSchema("eventdb");

 stmt = con->createStatement();
  result = stmt->executeQuery("SELECT * FROM Events;");

  while (result->next()) {
    cout << "\t... MySQL replies: ";
    /* Access column data by alias or column name */
    cout << result->getString("Id") << endl;
    cout << "\t... MySQL says it again: ";
    /* Access column data by numeric offset, 1 is the first column */
    cout << result->getString(1) << endl;
  }

}
//   Event* Database::getRandomEvent(){

//  }
