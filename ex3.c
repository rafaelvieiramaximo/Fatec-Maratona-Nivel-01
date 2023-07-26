#include <stdio.h>
#include <math.h>

int main() {
 
    const double n=3.14159;
    double A,R;
    scanf("%lf",&R);
    A = n * pow(R,2);
    printf("A=%.4lf\n",A);
    return 0;
}