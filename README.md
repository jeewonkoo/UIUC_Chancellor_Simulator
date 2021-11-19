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

The **email interface** will be implemented through console input and output. Every day there will be a new-coming event determined by a randomized function that extracts a random event from the **event database**. Each event player will be given multiple options to decide from.

The **decision making function** will be implemented additively to reflect impacts on the 4 primary stats player made through the decision. It is also responsible for checking if the game has come an end.

There will be an **event database** which is an Relational database seperate from the c++ code. The main program will be able to at random get events from the event table

# BUILD INSTRUCTIONS

install the mysql connector library 
```
sudo apt-get install libmysqlcppconn-dev
```

