#include <stdio.h>
#include <locale.h>

float alan_bul(){
	float a;
	float h;
	
	printf("�cgenin tabanini giriniz : ");
	scanf("%f",&a);
	printf("�cgenin y�ksekligini giriniz : ");
	getchar();
	scanf("%f",&h);
	return (a*h/2.0);
}

int main() {
	setlocale(LC_ALL,"");
	printf("\n�cgenin alani %f dir.",alan_bul());
	return 0;
}

