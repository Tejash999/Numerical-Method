#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#define N 4 // number of data points 
#define e 2.35
double power(double x, double b, double y, double a) 
{ 
return pow(e, a*x+b); 
} 
int main() 
{ 
double x[N] = {61,26,7,2.6}; // x values 
double y[N] = {350, 400, 500, 600}; // y values 
double sum_x = 0.0, sum_y = 0.0, sum_xy = 0.0, sum_xx = 0.0; 
double a, b; 
int i; 
for (i = 0; i < N; i++) { 
sum_x += log(x[i]); 
sum_y += log(y[i]); 
sum_xy += log(x[i]) * log(y[i]); 
sum_xx += log(x[i]) * log(x[i]); 
} 
b = (N * sum_xy - sum_x * sum_y) / (N * sum_xx - sum_x * sum_x); 
a = exp((sum_y - b * sum_x) / N); 
printf("y = %.2f * x^%.2f\n", a, b); 
return 0;
}

