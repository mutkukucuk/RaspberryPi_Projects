
#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char **argv)
{
	wiringPiSetup();
	pinMode(15, OUTPUT);
	while (1)
	{
		for (int i = 0; i < 40; i++)//posizyon 0
		{
			digitalWrite(15,HIGH);
			delayMicroseconds(500);
			digitalWrite(15,LOW);
			delayMicroseconds(19500);
		}
		delay(300);
		for (int i = 0; i < 40; i++)//posizyon 90
		{
			digitalWrite(15,HIGH);
			delayMicroseconds(1500);
			digitalWrite(15,LOW);
			delayMicroseconds(18500);
		}
		for (int i = 0; i < 40; i++)//posizyon 180
		{
			digitalWrite(15,HIGH);
			delayMicroseconds(2300);
			digitalWrite(15,LOW);
			delayMicroseconds(17700);
		}
		
		delay(300);
		
	}
	
	return 0;
}

