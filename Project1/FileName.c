#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int x = 2100;
	int S = 1000;
	int L = 250;
	int res1 = x * S * 100 / L;
	printf("Грей заплатит %d золотых", res1);
	return 0;
}