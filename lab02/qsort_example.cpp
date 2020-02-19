#include <stdio.h>
#include <stdlib.h>
#define ARRAY_MAX 5
// The compare function compares two values received as parameters.
// We have to specify this function with general parameter types, since
// being passed to the qsort, such approach insures the type safety.
// In other words, qsort does not care about types of elements being sorted.
int compare(const void* a, const void *b)
{
	// Returning value: <0, if a<b;
	// 0, if a=b;
	// >0, if a>b.
	double* da=(double*)a, *db=(double*)b;
	if(*da<*db) return-1;
	else if (*da==*db) return 0;
	else return 1;
}
int main()
{
	double d[ARRAY_MAX];
	int i;
	for(i=0;i<ARRAY_MAX;i++)
	{
		printf("Enter a number:");
		scanf("%lf", &d[i]);
	}
	qsort(d,ARRAY_MAX,sizeof(double), compare);
	for(i=0;i<ARRAY_MAX;i++)
	{
		printf("%lf ",d[i]);
	}
	return 0;
}
