#include <kipr/wombat.h>

int main()
{
    
    //motor 0 = left
    //motor 1 = right 
    
    //servo_middle = 660
    //far left = 1225
    //far right = 0
    
    enable_servos();;
    motor(1,100);
    motor(0,100);
    msleep(700);
    set_servo_position(0, 660);

    motor(0,100);
    motor(1,100);
    // msleep(1500);
    
    motor(0,100);
    motor(1, 30);
    msleep(1800);

    motor(0,100); 
    motor(1,100);
    msleep(1600);
    
    motor(0,100);
    motor(1,0);
    msleep(1700);
    
	motor(0,-100);
	motor(1,-100);
    msleep(1900);
    
    set_servo_position(0,1225);
    motor(0,0);
    motor(1,90);
    msleep(1600);
    
    motor(1,100);
    motor(0,100);
    msleep(500);
    set_servo_position(0,0);
    msleep(1000);
    
    
    
    
    
    
    



    return 0;
}
