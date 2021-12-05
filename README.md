# 
<div align=center>

  \
	![header](https://capsule-render.vercel.app/api?type=waving&&color=timeAuto&width=400&height=300&section=header&text=UIUC%20Chancellor%20Simulator&fontSize=57&fontAlignY=35&desc=How+would+you+promote+the+school+if+one+day+you+are+elected+as+the+chancellor?&descAlign=50&descAlignY=55&descSize=21&animation=twinkling)
</div>

Players in the game are to maximize various factors on campus to succeed. The game constitutes of **4 primary stats** structured as below.




##  
<div align=center>
	:chart_with_upwards_trend: Primary Statistics :chart_with_downwards_trend:
	</br></br>
    :moneybag: Funding :moneybag: </br>
    Alumni </br>
    State Funding
    </br>
    </br>
    :mortar_board: Reputation :mortar_board: </br>
    US news ranking </br>
    Employment rate </br>
    Honors and awards </br>
    </br>
    </br>
    :school_satchel: Student Life :school_satchel: </br>
    Campus safety </br>
    Living conditions </br>
    Food </br>
    Education Quality </br>
    </br></br>
    :school: Faculty :school: </br>
    Members </br>
    Research </br>
    
</div>


## 

Every day there will be new coming emails regarding recent events. Players will make decisions on events, which will either positively or negatively impacting the school as reflected in the 4 primary stats.


The **email interface** will be implemented through console input and output. Every day there will be a new-coming event determined by a randomized function that extracts a random event from the **event database**. Every event is behaved as a tree with possible mutiple future events as branches. For each event, player will be given multiple options to decide from.

The **decision making function** will be implemented additively to reflect impacts on the 4 primary stats player made through the decision. It is also responsible for checking if the game has come an end.

There will be an **event database** which is an Relational database seperate from the c++ code. The main program will be able to at random get events from the event table

## 

# BUILD INSTRUCTIONS

install the mysql connector library 
```
sudo apt-get install libmysqlcppconn-dev
```



