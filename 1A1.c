// 1A1.c Programma funkcijas tuvinātās vērtības aprēķinam summējot skaitļu virknes elementus un lietojot rekurences izteiksmi
// Funkcija exp(x)
// Elvijs Buls
// Datums: 17.01.2020

#include <stdio.h>
#include <math.h>

#define N 8 // Definē konstanti N - summas locekļu skaits
// Pie N = 7 piektais cipars aiz komata mainās.

int main(){

	int k; // Summas mainīgais
	double sum; // Sākuma summa
	double a = 1; // Summas tekošais loceklis, šoreiz pirmais
	double x = 1; // Izvēlēts funkcijas arguments
	sum = a; // Summa ir pirmā locekļa vērtība
	// Izdrukā sākuma vērtības
	printf ("N = %i, Sākuma summa = %g \n", N, sum);

	// Sāk ciklisku summēšanu
	for (k = 1; k<=N; k++ ){
		a = a * x/k;
		sum = sum + a;
		printf("%d. summas loceklis ir: %g \n", k, a);
	}

	// Aprēķina y ar bibliotēkas funkciju:
	double y = exp(x);
	// Iegūtos datus izvada uz ekrāna
	printf("x = %g, y = %g, Summa = %g \n", x, y, sum);
}
