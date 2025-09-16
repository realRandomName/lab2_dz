#include <stdio.h>

int main()

{
	int widht_cm = 80;
	int x = 3;
	int B = 100;
	float widht_m = widht_cm / 100.0;
	float square = x * widht_m;
	float price = B * square;

	printf("price = %0.f RUB", price);
	return 0;
}