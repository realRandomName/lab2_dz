#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_CTYPE, "RUS");
	int widht_cm = 80;
	int x = 3;
	int B = 100;
	float widht_m = widht_cm / 100.0;
	float square = x * widht_m;
	float price = B * square;

	printf("В магазине продается костюмная ткань. Ее цена %d рублей за кв. Метр. Напишите программу, которая подсчитает и выведет на экран стоимость куска этой ткани длиной %d м и шириной 80 см.1. Цена = %0.f рублей", B, x, price);
	return 0;
}
