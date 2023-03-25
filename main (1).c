#include <kipr/wombat.h>

int main()
{
    
    //motor 0 = left
    //motor 1 = right 
    
    enable_servos();;
    motor(1,100);
    motor(0,100);
    msleep(700);
    set_servo_position(0, 1288);
    set_servo_position(1,1456);

    motor(0,100);
    motor(1,100);
    // msleep(1500);

    motor(0,100);
    motor(1, 30);
    msleep(1300);

    motor(0,100); 
    motor(1,100);
    msleep(1000);


    motor(0,30);
    motor(1,68);
    msleep(650);

    motor(0,100);
    motor(1,100);
    msleep(800);

    motor(0,1);
    motor(1,91);
    msleep(650);
    set_servo_position(0,870);
    set_servo_position(1,1307);

    motor(0,100);
    motor(1,100);
    msleep(750);
    set_servo_position(0,554);
    set_servo_position(1,2047);

    motor(0,-65);
    motor(1,-100);
	msleep(500);
    
    motor(0,-90);
    motor(1, 90);
    msleep(657);

    return 0;
}
