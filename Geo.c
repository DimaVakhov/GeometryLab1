#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int R, N;
    float S, P;
    const float pi = 3.1415;
    printf("Input cout circles: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("\nInput radius: ");
        scanf("%d", &R);
        P = 2 * pi * R;
        S = pi * pow(R, 2);
        printf("Периметр:"
               "%10.3f",
               P);
        printf("Площадь:"
               "%10.3f",
               S);
    }
    return 0;
}
