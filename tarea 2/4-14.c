#include <stdio.h>

#define swap(t, x, y) do{ t safe ## x ## y; safe ## x ## y = x; 		x = y; 		y = safe ## x ## y; 	} while (0)

int main(void) {
	int ix, iy;
	double dx, dy;
	char *px, *py;
	
	ix = 42;
	iy = 69;
	printf("enteros antes del intercambio: %d y %d\n", ix, iy);
	swap(int, ix, iy);
	printf("enteros después del intercambio: %d y %d\n", ix, iy);
	
	dx = 123.0;
	dy = 321.0;
	printf("doubles antes del intercambio: %g y %g\n", dx, dy);
	swap(double, dx, dy);
	printf("enteros después del intercambio: %g y %g\n", dx, dy);
	
	px = "Hola";
	py = "Mundo";
	printf("punteros antes del intercambio: %s y %s\n", px, py);
	swap(char *, px, py);
	printf("enteros después del intercambio: %s y %s\n", px, py);

	return 0;
}