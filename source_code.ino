#include <Servo.h>
//defining all the pins and components
Servo s1,s2;
int a0,a1,a2,a3;
int h=90,v=90;
int d=30;//i assumed the threshold to be 30 since it is not mentioned
int dark=10;//there is not enough sunlight so it doesnt move.

void setup()
{
    //defining the attached pins of servo motor
    s1.attach(5);
    s2.attach(6);
    s1.write(h);
    s2.write(v);
}

void loop()
{
    //defining the pins used for photoresistors
    a0=analogRead(A0);
    a1=analogRead(A1);
    a2=analogRead(A2);
    a3=analogRead(A3);
	
    //definig left,right,top and bottom according to the positions of the photoresistors
    int left=(a3+a2)/2;
    int right=(a1+a0)/2;
    int top=(a3+a1)/2;
    int bottom=(a2+a0)/2;
    int avg=(a0+a1+a2+a3)/4;
	
  	//moving the servo according to the intensity of light
    if(avg>dark)
    {
        if(left-right>d)
            h=h-1;
        else if(right-left>d)
            h=h+1;

        if(top-bottom>d)
            v=v+1;
        else if(bottom-top>d)
            v=v-1;
    }

    //adjusting the servo such that it doesnot go past the limit
    if(h>170) h=170;
    if(h<10) h=10;
    if(v>170) v=170;
    if(v<10) v=10;
	
  	//moving the servos
    s1.write(h);
    s2.write(v);
  
    delay(100);
}
