#include "lab1.h"

void simpsonsAdaptiveIntegration(float aOrig, float bOrig, float eps, float minIntSize)
{
	float a = aOrig;
	float b = bOrig;
	float total = 0; 
	while (a!=bOrig)
	{
		if ((b-a<=minIntSize) || (fabs(S(a,(a+b)/2) + S((a+b)/2, b) - S(a,b) ) /15 < eps))
		{
			total+= S(a,b);
			a = b;
			b = bOrig;
		}
		else
		{
			b = (b+a)/2;
		}
	}
	printf("Result is: %f",total);
}
