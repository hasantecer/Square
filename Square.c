#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int kenar1,kenar2;
	printf(" 1. Kenari Giriniz:");
	scanf("%d",&kenar1);
	printf("2: Kenari Giriniz:");
	scanf("%d",&kenar2);
	
	alan(kenar1,kenar2);
	cevre(kenar1,kenar2);
	
	system("pause");
	return 0;
}


int alan(int a,int b)
{
	int area;
	
	area=a*b;
	
	printf("Dikdortgenin Alani = %d 'dir\n",area);
	
}

int cevre(int c, int d)
{
	int toplam;
	
	toplam=2*(c+d);
	
	printf("\n Dikdortgenin cevresi = %d 'dir\n",toplam);
}
