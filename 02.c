#include <stdio.h>
#include <math.h>

int main()
{
    double xA, xB, yA, yB, dA, dB, AB;

    printf("Nhap toa do diem 1: ");
    scanf("%lf %lf", &xA, &yA);

    printf("Nhap toa do diem 2: ");
    scanf("%lf %lf", &xB, &yB);

    dA = pow((xA-xB),2);
    dB = pow((yA-yB),2);

    AB = sqrt((dA+dB));

    printf("khoang cach diem cua ban la: %.2lf", AB);




    return 0;
}