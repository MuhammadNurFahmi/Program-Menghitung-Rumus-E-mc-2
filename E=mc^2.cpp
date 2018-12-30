#include <stdio.h>
#include <conio.h>


int main ()

{
	float c=89.88,m,E;
	printf("Program Perhitungan Menggunakan Rumus E=mc2\n");
	printf("-------\n");
	printf("Masukkan massa (kg) = ");scanf("%f", &m);
	E=m*c*c;
	printf("E = %.2f*%.2f*%.2f=\n %.2f J",m,c,c,E);
	
	return 0;
}
