#include <stdio.h>
#include <math.h>

int main(void)
{
    double xC, yC, rC, xM, yM, dX, dY, CM;

    printf("Nhap toa do tam duong tron va ban kinh: ");
    scanf("%lf %lf %lf", &xC, &yC, &rC);
    // printf("%lf %lf %lf", xC, yC, rC);

    printf("Nhap toa do diem M: ");
    scanf("%lf %lf", &xM, &yM);

    dX = pow((xC-xM),2);
    dY = pow((yC-yM),2);
    CM = sqrt((dX+dY));

    if(CM == rC){
        printf("Diem M nam tren duong tron");
    }
    if(CM<rC){
        printf("Diem M nam trong duong tron");
    }
    if(CM > rC){
        printf("Diem M nam ngoai duong tron");
    }



    return 0;    
}