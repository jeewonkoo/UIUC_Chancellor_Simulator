# UIUC Chancellor Simulator
How would you promote the school if one day you are elected as the chancellor? Players in the game are to maximize various factors on campus to succeed. The game constitutes of **4 primary stats** structured as below.

##### Primary Statistics
* Funding
    * Alumi
    * State Funding
* Reputation
    * US news ranking
    * Employment rate
    * Honors and awards
* Student Life
    * Campus safety
    * Living conditions
    * Food
    * Education Quality
* Faculty
    * members
    * research

Every day there will be new coming emails regarding recent events. Players will make decisions on events, which will either positively or negatively impacting the school as reflected in the 4 primary stats.

The **email interface** will be implemented as a randomized (determined by a random number generator) queue of linked list. Within the queue, each element represents a series of events in a particular order determined by the linked list contained in the event database.

The **decision making function** will be implemented additively with a threshhold to determine whether the outcome will be good or bad. Once a linked list reaches the end, the outcome will be reflected on the 4 primary stats.

There will be an **event database** which is an Relational database seperate from the c++ code. The main program will be able to at random get events from the event table

#BUILD INSTRUCTIONS

Use 
'''
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install mysqlclient
sudo apt-get install libmysqlcppconn-dev
'''

