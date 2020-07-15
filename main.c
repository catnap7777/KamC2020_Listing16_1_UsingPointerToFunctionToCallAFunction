
//Listing 16.1 Using a pointer to a function to call the function; p 387

#include <stdio.h>

//function prototype
double square(double x);

//point to function declaration
double (*ptr)(double x);

int main(void)
{
    //intialize ptr to point to square()
    ptr = square;

    //call square() two ways
    printf("\n%f   %f\n",square(6.6), ptr(6.6));
    return 0;
}

double square(double x)
{
    return x * x;
}
