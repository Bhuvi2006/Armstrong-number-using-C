//Armstrong number 
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter a 3 digit number: ");
    scanf("%d",&a);//153
    b=a/10;//15
    c=a%10;//3
    d=b/10;//1
    e=b%10;//5
    f=(d*d*d)+(e*e*e)+(c*c*c);
    if (f==a)
    {
        printf("The number is an Armstrong number.");
    }
    else
    {
        printf("The number is not an Armstrong number.");
    }    
    
}
