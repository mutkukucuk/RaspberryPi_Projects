#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char **argv)
{
    wiringPiSetup();
    pinMode(0,OUTPUT);
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);

    while(1)
    {
        for (int i=0;i<3;i++)
        {
            digitalWrite(i,HIGH);
	    delay(50);
	    digitalWrite(i,LOW);
	}
        for (int i=2;i>=0;i--)
        {
            digitalWrite(i,HIGH);
	    delay(50);
	    digitalWrite(i,LOW);
	}
    }
    return 0;
}