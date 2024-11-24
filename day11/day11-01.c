#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c;
    double discriminant, root1, root2;
    while (1)
    {
        printf("이차방정식의 계수를 입력해 주세요. 프로그램을 종료하려면 이차항에 0을 넣어주세요. \n");
        printf("이차항:");
        scanf_s("%lf", &a);
        if (a == 0)
        {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        printf("일차항:");
        scanf_s("%lf", &b);
        printf("상수항:");
        scanf_s("%lf", &c);

       

        discriminant = b * b - 4 * a * c;

        if (discriminant > 0)
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("실근 = %.2f,%.2f\n", root1, root2);
        }
        else if (discriminant == 0)
        {
            root1 = -b / (2 * a);
            printf("중근 = %.2f\n", root1);
        }
        else
        {

            printf("허근입니다. \n");
        }
    }
    return 0;
}
