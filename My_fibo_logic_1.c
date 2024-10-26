#include<stdio.h>
int main()
{
    //initialisations
    int a=0, b=1, c=0, n, i=2, j;
    
    //n value input
    printf("Enter value for n: ");
    scanf("%d", &n);
    
    //calculations
    do{
        //for 1st 2 terms
        if(j=i-2 <= 1){
            printf("%d\t", a);
        }
        //for after 2nd terms
        c=a+b;
        a=b;
        b=c;
        printf("%d\t", b);
        i++;
    }while(i < n);
    return 0;
}