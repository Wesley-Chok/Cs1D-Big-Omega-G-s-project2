# Cs1D-Big-Omega-G-s-project2
CS1D Baseball Project

Program, dedicated to passionate Baseball fans, to determine the most efficient stadium travel plan based upon user selection. To achieve this goal, a very readable and easy to use interfance must be implemented.

### In-Depth Description:
- In order to store the baseball stadium information (Souvenir information, Major League Baseball Information, distance between stadium to stadium) a connection to DB Browser's (SQLite) database must be developed
- The selected campus information derived from DB Browser's (SQLite) database will be stored in Qt's vector (QVector<QString>) datastructure
- The campus sorting based on user selection will be stored in in Qt's queue (QQueue<QString>) datastructure and will be utilized in the recursion function
- The selected souvenir information derived from DB Browser's (SQLite) database will be stored in Qt's stack (QStack<Souvenir>) datastructure
- Qt's push button's are used in order for the admin or student to navigate through the program
- Algorithms such as minimum spanning tree, breadth-first search, depth first search and Dijktra's will be used to find the most efficient route between the baseball stadiums


### Pictures: 
![Imgur image](https://imgur.com/I322WSZ.jpg)
![Imgur image](https://imgur.com/icoWcnQ.jpg)
![Imgur image](https://imgur.com/ylyYUR4.jpg)
![Imgur image](https://imgur.com/xWfkzIO.jpg)
![Imgur image](https://imgur.com/RQAe4DK.jpg)

### Deployment
Built and ran in Qt

### Built with

* [Qt](https://www.qt.io) - Graphical User Interface
* [SQLite](https://www.sqlite.org/index.html) - Database engine
* [DB Browser](http://sqlitebrowser.org) - Database browser to easily use the database
