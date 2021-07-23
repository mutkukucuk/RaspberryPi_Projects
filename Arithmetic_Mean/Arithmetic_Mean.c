#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char **argv)
{
	wiringPiSetup();
	pinMode(15,OUTPUT);
	pinMode(16,OUTPUT);
	int x,y,z;
	float ortalama;
	while(1)
	{
		printf("Lütfen degerleri giriniz:\n");
		scanf("%d %d %d",&x, &y, &z);
		ortalama = (x+y+z)/3;
		if(ortalama<10)
		{
			for(int tekrar=0;tekrar<10;tekrar++)
			{
				digitalWrite(16,HIGH);
				delay(200);
				digitalWrite(16,HIGH);
				delay(200);
			}
		}
		else
		{
			for(int tekrar=0;tekrar<10;tekrar++)
			{
				digitalWrite(16,HIGH);
				delay(200);
				digitalWrite(16,HIGH);
				delay(200);
			}
		}
	}
	
	
	return 0;
}

