#include<iostream>

using namespace std;

struct Point{
    double x;
    double y;
};
struct Rect{
    double x,y,w,h;
};

struct Ship
{
    Rect tau;
    string id;
    int dx,dy;
    
    void move()
    {
        tau.x+=dx;
        tau.y+=dy;
    }
};

void display(const Ship& ship)
{
    cout<<"so hieu "<<ship.id<<endl;
    cout<<"toa do "<<ship.tau.x<<" "<<ship.tau.y<<endl;
}

int main()
{
    Ship ship1 = {{10, 20, 30, 40}, "ABC", 3, 2};
    Ship ship2 = {{50, 60, 30, 40}, "DEF", 2, 1};
   int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);

        loop++;
    }
}