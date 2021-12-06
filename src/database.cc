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
  

}
Event* Database::getRandomEvent(){
	struct Event* e = new Event();

	do{
		result = stmt->executeQuery("SELECT * FROM Events ORDER BY RAND() LIMIT 1");
		if(!result->next())
  		return e; //Handle Failiure
		bool addremove;
		if(result->getString("AddRemove") == "ADD") {
			addremove = true;
		}
		addremove = false;
		
		e->id = result->getInt("ID");
		e->text = result->getString("Text");
		e->impact[1][0] = result->getInt("Funding1");
		e->impact[2][0] =result->getInt("Funding2");
		e->impact[3][0] = result->getInt("Funding3");
		e->impact[1][1] = result->getInt("StudentLife1");
		e->impact[2][1] =result->getInt("StudentLife2");
		e->impact[3][1] = result->getInt("StudentLife3");
		e->impact[1][2] =  result->getInt("Reputation1");
		e->impact[2][2] = result->getInt("Reputation2");
		e->impact[3][2] = result->getInt("Reputation3");
		e->AddRemove = addremove;
		e->faculty = result->getString("FacultyName");
		e->impact[1][3] =result->getInt("Future1");
		e->impact[2][3]=  result->getInt("Future2");
		e->impact[3][3]=  result->getInt("Future3");
		  e->impact[1][4] =result->getInt("Multiplier1");
		  e->impact[2][4] = result->getInt("Multiplier2");
		  e->impact[3][4] =  result->getInt("Multiplier3");




	}
	while( !(result->getString("Random") == "TRUE" && (result->getString("Repeatable") == "TRUE" || visited_ids.find(e->id = result->getInt("ID")) == visited_ids.end()) ) );
		
	

	if(e->id != -1){
		visited_ids.insert(e->id);
	}
	return e; 

	
}

Event* Database::getEventbyID(int id){

	
	struct Event* e = new Event();

		result = stmt->executeQuery("SELECT * FROM Events where ID= " + to_string(id));
		if(!result->next())
  		return e; //Handle Failiure


		  	 if((result->getString("Repeatable") == "FALSE" && visited_ids.find(e->id = result->getInt("ID")) != visited_ids.end()) ){
					return e;
			}

		bool addremove;
		addremove = true;
		if(result->getString("AddRemove") == "null") {
			addremove = false;
		}
		
		
		e->id = result->getInt("ID");
		e->text = result->getString("Text");
		e->impact[1][0] = result->getInt("Funding1");
		e->impact[2][0] =result->getInt("Funding2");
		e->impact[3][0] = result->getInt("Funding3");
		e->impact[1][1] = result->getInt("StudentLife1");
		e->impact[2][1] =result->getInt("StudentLife2");
		e->impact[3][1] = result->getInt("StudentLife3");
		e->impact[1][2] =  result->getInt("Reputation1");
		e->impact[2][2] = result->getInt("Reputation2");
		e->impact[3][2] = result->getInt("Reputation3");
		e->AddRemove = addremove;
		e->faculty = result->getString("FacultyName");
		e->impact[1][3] =result->getInt("Future1");
		e->impact[2][3]=  result->getInt("Future2");
		e->impact[3][3]=  result->getInt("Future3");
		  e->impact[1][4] =result->getInt("Multiplier1");
		  e->impact[2][4] = result->getInt("Multiplier2");
		  e->impact[3][4] =  result->getInt("Multiplier3");

		
	

	visited_ids.insert(e->id);
	
	return e; 

	
}





