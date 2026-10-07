#include <stdio.h>
#include <math.h>

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
    scanf("%lf %lf", &xA, &yB);

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

    if(S1+S2+S3>S){
        printf("M nam ngoai");
    }

    if(S1+S2+S3 == S && (S1 ==0 || S2==0 || S3 ==0)){
        printf("M nam tren canh");
    }

    if(S1+S2+S3 == S && (S1 >0, S2>0, S3>0)){
        printf("M nam trong");
    }


    return 0;
}