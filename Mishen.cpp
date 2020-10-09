#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;


main()
{
int x, y;
unsigned short int number, radius, points, pointsall;
cout << "Welcome to MiShen!" << endl << "You have five shots. Write in a space the coordinates at which you shoot (for example 3 -1). There is a chance of a miss from -5 to +5 for each coordinate. Center at point 0 0." << endl;
cout << "BEGIN!" << endl;
number = 1;
pointsall = 0;
while (number < 6)
{

cout << "Shot number " << number << endl;
cin >> x >> y;
srand(time(0));
x = x + (rand() % 11) - 5;
y = y + (rand() % 11) - 5;
points = 0;
radius = 5;
cout << "You hit the point with coordinates " << x << " " << y << endl;
while ((x*x + y*y <= radius*radius) && (radius!=0))
{
    points=points+1;
    radius=radius-1;
}
cout << "Points earned for the last shot " << points << endl;
pointsall=pointsall+points;
cout << "Total points earned so far " << pointsall << endl;
number=number+1;

}
if (pointsall<10)
{
cout << "YOU ARE LOSER!" << endl;
}
else
{
cout << "YOU ARE WINNER!" << endl;
}
}

