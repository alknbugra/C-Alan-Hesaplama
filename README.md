# C-_-Alan-Hesaplama
find the area of the triangle

```sh

#include <stdio.h>
#include <locale.h>

float alan_bul(){
	float a;
	float h;
	
	printf("Ücgenin tabanini giriniz : ");
	scanf("%f",&a);
	printf("Ücgenin yüksekligini giriniz : ");
	getchar();
	scanf("%f",&h);
	return (a*h/2.0);
}

int main() {
	setlocale(LC_ALL,"");
	printf("\nÜcgenin alani %f dir.",alan_bul());
	return 0;
}


```
