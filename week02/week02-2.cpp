#include <stdio.h>
int main ()
{
    float pi = 3.14 ;
    double pi2 = 3.14 ;
    printf("float  %f\n", pi);
    printf("double %f\n", pi2);
    printf("float  10位:%10f\n",pi);
    printf("double 10位:%10f\n",pi2);
    printf("float  10位:%20.18f\n",pi);
    printf("double 10位:%20.18f\n",pi2);
}