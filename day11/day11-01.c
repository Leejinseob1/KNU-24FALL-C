#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c;
    double discriminant, root1, root2;
    while (1)
    {
        printf("������������ ����� �Է��� �ּ���. ���α׷��� �����Ϸ��� �����׿� 0�� �־��ּ���. \n");
        printf("������:");
        scanf_s("%lf", &a);
        if (a == 0)
        {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }
        printf("������:");
        scanf_s("%lf", &b);
        printf("�����:");
        scanf_s("%lf", &c);

       

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
            printf("�߱� = %.2f\n", root1);
        }
        else
        {

            printf("����Դϴ�. \n");
        }
    }
    return 0;
}
