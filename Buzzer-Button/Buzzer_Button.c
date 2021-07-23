#include <stdio.h>
#include <wiringPi.h>
#define led 16
#define button 15

int main(int argc, char **argv)
{
	wiringPiSetup();
	pinMode(led,OUTPUT);
	pinMode(button,INPUT);
	
	while(1)
	{
		if(digitalRead(button)==1)
		{
			digitalWrite(led,HIGH);
		}
		else
		{
			digitalWrite(led,LOW);
		}
	}
	return 0;
}