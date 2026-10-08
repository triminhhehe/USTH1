#include <stdio.h> 

int main()
{
    float a,b,c;
    printf("enter your A B C: ");
    scanf("%f %f %f", &a, &b, &c);

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
    
    printf("%.1f %.1f %.1f \n", a, b, c);
    printf("Min: %.1f \n", a);
    printf("Max: %.1f \n", c);

    // bubble sort early access
    return 0;



}
