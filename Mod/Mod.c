#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char **argv)
{
	wiringPiSetup();
	pinMode(15,OUTPUT);
	int x = 0;
	while(1)
	{
		printf("Lütfen bir sayi giriniz: ");
		scanf("%d",$x);
		if(x%2==0)
		{
			printf("Girilen Sayi 2 ile Tam Bolunur \n");
			digitalWrite(15,HIGH);
			delay(1000);
			digitalWrite(15,LOW);
		}
		else
		{
			printf("Girilen Sayi 2 ile Tam Bolunmez!!!");
		}
	}
	return 0;
}

