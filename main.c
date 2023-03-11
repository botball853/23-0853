#include <kipr/wombat.h>

int main()
{
    enable_servos();
    motor(1,100);
    motor(0,0);
    msleep(1500);
    
    motor(0,100);
    motor(1,100);
    msleep(4000);
    return 0;
}
