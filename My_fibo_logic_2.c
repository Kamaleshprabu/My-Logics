#include<stdio.h>

int main()
{
    int p[10], i=2, n;
    
    printf("Enter value for n: ");
    scanf("%d", &n);
    
    p[0]=0;
    printf("%d\t", p[0]);
    p[1]=1;
    printf("%d\t", p[1]);
    
    do{
        
        p[i] = p[i-2] + p[i-1];
        printf("%d\t", p[i]);
        i++;
        
    }while (i < n );
    
}