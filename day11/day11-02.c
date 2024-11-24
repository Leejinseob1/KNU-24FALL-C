#include <stdio.h>
#include <math.h>
#include <stdint.h>

double f(double x)
{
    return -log(1 / x) + sin(x);
}

double integrate(double a, double b, unsigned long long n)
{
    double step = (b - a) / n;
    double sum = 0.0;

    for (unsigned long long i = 0; i < n; i++)
    {
        double x_left = a + i * step;
        double x_right = x_left + step; 
        double x_mid = (x_left + x_right) / 2;
        sum += f(x_mid) * step;
    }
    return sum;
}

int main()
{
    double a = 10.0;
    double b = 30.0;
    int j = 1;

    for (unsigned long long i = 1; i <= 30; i++) 
    {
        unsigned long long n = (unsigned long long)pow(2, i);
        double result = integrate(a, b, n);
        printf("구간 2^%d  적분 결과: %.10f\n", j, result);
        j++;
    }

    return 0;
}
