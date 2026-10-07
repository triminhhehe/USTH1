#include <stdio.h>

int main(void)
{
    int n = 0;
    int So;
    int Dem = 0 ;
    while(1)
    {
        printf("Hay nhap so ban muon tim uoc: ");
        scanf("%d", &So);

        if (So>=1)
        {
            break;
        }
        
    }


    for(int i = 1; i<=So; i++)
    {
        if(So%i==0){
            printf("%d \n",i);
            n+=1;
            Dem=Dem+i;
        }
    }

    printf("So uoc cua so %d dau la: %d\n", So, n);
    printf("Tong uoc cua so %d la: %d",So ,Dem);


    return 0;
}