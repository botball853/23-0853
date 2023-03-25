#include <kipr/wombat.h>
#include <stdlib.h>
int left = 0;
int right = 1;
int ninetydegrees = 1050;

void move(int speed, int distance)
{
    cmpc(left);
    while (gmpc(left) < distance)
    {
        motor(left,speed);
        motor(right,speed);
    }  
}

void turnRight(int distance, int speed)
{
    cmpc(left);

    while (abs(gmpc(left)) < distance)
    {
        motor(left, speed);
        motor(right,-speed);
    }
}

void turnLeft(int distance, int speed)
{
    cmpc(right);

    while (abs(gmpc(right)) < distance)
    {
        motor(left, -speed);
        motor(right,speed);
    }
}
int main()
{

    // wait_for_light(1);



    //First 90 degree turn
    enable_servos();
    turnRight(ninetydegrees,80);
    move(80, 5184); 
    //Get the poms at a 
    turnLeft(ninetydegrees + 120,80);
    move(80,2000);

    return 0;
}
