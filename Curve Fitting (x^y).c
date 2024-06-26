#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4 // number of data points
double power(double x, double y)
{
    return pow(x, y);
}
int main()
{
    double x[N] = {61, 26, 7, 2.6};     // x values
    double y[N] = {350, 400, 500, 600}; // y values
    double sum_x = 0.0, sum_y = 0.0, sum_xy = 0.0, sum_xx = 0.0;
    double a, b;
    int i;
    for (i = 0; i < N; i++)
    {
        sum_x += log10(x[i]);
        sum_y += log10(y[i]);
        sum_xy += log10(x[i]) * log10(y[i]);
        sum_xx += log10(x[i]) * log10(x[i]);
    }
    b = (N * sum_xy - sum_x * sum_y) / (N * sum_xx - sum_x * sum_x);
    a = pow(10,((sum_y - b * sum_x)) / N);
    printf("y = %.2f * x^%.2f\n", a, b);
    return 0;
}