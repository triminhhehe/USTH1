#include <stdio.h>

int main()
{
    printf("Ex1: Convert C to F\n");

    double C, F;
    printf("Hay nhap gia tri ban muon convert: ");
    scanf("%lf", &C);
    F = 9.0 / 5 * C + 32;
    printf("Gia tri F cua ban la %.2lf\n", F);

    printf("Ex2 and 3:---------------------------------------------------------------\n");
    double a,b,c;
    printf("enter your A B C: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b){ 
        a = a+b;
        b = a-b;
        a = a-b;
        // printf("%.1f \n", a);
        // printf("%.1f \n", b);
    }

    if (b>c){
        b = b+c;
        c = b-c;
        b = b-c;
        // printf("%.1f \n", b);
        // printf("%.1f \n", c);
    }

    if (a > b){ 
        a = a+b;
        b = a-b;
        a = a-b;
    }
    
    printf("%.1lf %.1lf %.1lf \n", a, b, c);
    printf("Min: %.1lf \n", a);
    printf("Max: %.1lf \n", c);

    printf("Ex4:-------------------------------------------------------------------\n");
     int user_input;
    printf("Nhap so nam cua ban muon nhap: ");
    scanf("%d", &user_input);
    // printf("%d", user_input);
    if(user_input % 400 ==0){
        printf("Nam %d cua ban la nam nhuan \n", user_input);

    }

    else if (user_input%4==0 && user_input%100!=0)
    {
        printf("Nam %d cua ban la nam nhuan \n", user_input);
    }
    
    

    else{
        printf("Nam %d cua ban ko phai la nam nhuan \n", user_input);


    }
    // printf("%lf %lf", x, y );

    printf("Ex5:-----------------------------------------------------------------------\n");
    double d, e, f ;
    double D, Dy, Dx ;
    double x, y;
    printf("nhap he so cua he phuong trinh1 ax + by = c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    // printf("%.2lf %.2lf %.2lf", a, b, c);
    printf("nhap he so cua he phuong trinh2 dx + ey = f: ");
    scanf("%lf %lf %lf", &d, &e, &f);
    
    D = a*e - b*d;
    Dy = a*f - d*c;
    Dx = c*e - b*f;

    x = Dx/D;
    y = Dy/D;

    if(Dx ==0 && Dy==0){
        printf("Pt vo so nghiem \n");
    }

    else if (D != 0)
    {
        printf("Pt co nghiem duy nhat (%.2lf,%.2lf) \n", x,y);
    }

    else
    {
        printf("Pt vo nghiem \n");
    }

    printf("Ex6:---------------------------------------------------------\n");
    int Thang;
    while(1){
        printf("Nhap so thang cua ban: ");
        scanf("%d", &Thang);

        if (Thang >=1 && Thang <=12)
        {
            break;
        }
        
    }

    switch (Thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("Co 31 ngay\n");
        break;
    case 4: case 6: case 9: case 11:
        printf("Co 30 ngay\n");
        break;
    case 2:
        printf("Co 28 hoac 29 ngay\n");
        break;
    default:
        printf("Thang ko hop le\n");
        break;
    }

    return 0;
}