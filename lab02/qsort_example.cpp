#include <iostream>
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
    int arraySize;
    std::cout << "How many numbers should I expect?\n";
    std::cin >> arraySize;
	double* d = (double*)malloc(sizeof(double)*arraySize);
	for(int i=0; i<arraySize; i++)
	{
        std::cout << "Enter a number:";
        std::cin >> d[i];
	}
	qsort(d, arraySize, sizeof(double), compare);
	for(int i=0; i<arraySize; i++)
	{
        std::cout << d[i] << " ";
	}
    std::cout << std::endl;
    free(d);
	return 0;
}
