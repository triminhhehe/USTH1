#include <stdio.h>
#include <math.h>
#define EPS 1e-9

double Dien_tich(double x1,double y1,double x2,double y2,double x3,double y3){
    return 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}


int main(void)
{
    double xA, yA;
    double xB, yB;
    double xC, yC;
    double xM, yM;
    

    printf("Nhap toa do diem A: ");
    scanf("%lf %lf", &xA, &yA);

    printf("Nhap toa do diem B: ");
    scanf("%lf %lf", &xB, &yB);

    printf("Nhap toa do diem C: ");
    scanf("%lf %lf", &xC, &yC);

    printf("Nhap toa do diem M: ");
    scanf("%lf %lf", &xM, &yM);

    // S = 1/2 * (xA*yB-xB*yA+xB*yC-xC*yB+xC*yA-xA*yC);
    double S = Dien_tich(xA,yA,xB,yB,xC,yC);
    double S1 = Dien_tich(xM, yM, xA, yA, xB, yB);   
    double S2 = Dien_tich(xM, yM, xB, yB, xC, yC);   
    double S3 = Dien_tich(xM, yM, xC, yC, xA, yA);


    if (S < EPS) {
        printf("A, B, C thang hang, khong tao thanh tam giac\n");
        return 0;
    }
    if (S1 + S2 + S3 - S > EPS) {
        printf("M nam ngoai tam giac\n");
    } else if (S1 < EPS || S2 < EPS || S3 < EPS) {
        printf("M nam tren canh tam giac ABC\n");
    } else {
        printf("M nam trong tam giac\n");
    }

    return 0;
}