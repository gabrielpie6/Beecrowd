#include <stdio.h>
#include <math.h>

int compare_double(double f1, double f2);
void main()
{
    long n, k;
    double A[2], B[2], C[2], D[2];
    double alfa, beta, x1, x2, y1, y2;
    double X, Y;

    // scanf("%ld", &n);
    for (k = 1; k < n + 1; k++)
    {
        // scanf("%lf %lf", &A[0], &A[1]);
        // scanf("%lf %lf", &C[0], &C[1]);
        // scanf("%lf %lf", &B[0], &B[1]);
        // scanf("%lf %lf", &D[0], &D[1]);
        
        // x1 = (double)((A[0] + B[0]) / 2.0);
        // x2 = (double)((C[0] + D[0]) / 2.0);
        // y1 = (double)((A[1] + B[1]) / 2.0);
        // y2 = (double)((C[1] + D[1]) / 2.0);

        // if (compare_double(B[1] - A[1], 0.0))
        // {
        //     if (compare_double(D[1] - C[1], 0.0))
        //         printf("oi");
        //     else
        //     {
        //         beta = (double)((D[0] - C[0]) / (D[1] - C[1]));
        //         X = x1;
        //         Y = beta * (x2 - X) + y2;
        //     }
        // }
        // else
        // {
        //     alfa = (double)((B[0] - A[0]) / (B[1] - A[1]));
        //     if (compare_double(D[1] - C[1], 0.0))
        //         X = x2;
        //     else
        //     {
        //         beta = (double)((D[0] - C[0]) / (D[1] - C[1]));
        //         if (compare_double(beta, alfa))
        //             printf("oi");
        //         else
        //             X = (double)((beta * x2 - alfa * x1 + y2 - y1) / (beta - alfa));
        //     }
        //     Y = alfa * (x1 - X) + y1;
        // }
        
        
        // printf("Caso #%ld: %.2f %.2f\n", k, floorf(X * 100) / 100, floorf(Y * 100) / 100);
    }
}

int compare_double(double f1, double f2)
{
    double precision = 0.0000001;
    if (((f1 - precision) < f2) && 
        ((f1 + precision) > f2))
        return 1;
    else
        return 0;
}