#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    if (a == 0) 
    {
        printf("3�� �������� �ƴմϴ�.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("�Ǳ� = %.2f,%.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("One real root:\nRoot = %.2f\n", root1);
    }
    else
    {

        printf("����Դϴ�.");
    }

    return 0;
}
