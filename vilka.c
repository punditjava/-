#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	double a = 1, b = exp(2);
	double x, result;
	for (i = 0; i < 11; ++i)
	{
		x = (a + b) / 2;
		result = log(x) - 1;
		printf("%i) [%1.10lf, %1.10lf] f(%1.10lf)",i, a , b, x);
		if (result > 0) {
			b = x;
			printf(">0\n");
		} else if(result < 0) {
			a = x;
			printf("<0\n");
		} else return -1;

	}
	return 0;
}