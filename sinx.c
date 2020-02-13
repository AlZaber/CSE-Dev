#include <stdio.h>
#include <stdlib.h>

double power(int x, int p){
    int result = 1;
    for(int i=0; i<p; i++)
        result *= x;
    return result*1.0;
}

double factorial(int x){
    int result = 1;
    for(int i=2; i<=x; i++)
        result *= i;
    return result*1.0;
}

int main()
{
    int iter = 6, x;
    double sinx = 0;

    scanf("%d", &x);
    for(int i=1; i<=iter; i++){
        int p = 2*i-1;
        if(i%2==0)
            sinx -= power(x, p)/factorial(p);
        else
            sinx += power(x, p)/factorial(p);
    }
    printf("%.3f", sinx);

    return 0;
}
