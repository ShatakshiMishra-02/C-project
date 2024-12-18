#include<stdio.h>
#include<math.h>
int main()
{
    printf("Binary to Decimal and Decimal to Binary Convertor\n");
    int choice,n;
    int ans=0;
    int i=0;
    printf("Enter your choice\n");
    printf("1 for Decimal to Binary\n");
    printf("2 for Binary to Decimal\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Decimal to Binary Convertor\n");
        printf("Enter the number\n");
        scanf("%d",&n);
        while(n!=0)
        {
            int bit= n & 1;
            ans=(bit * pow(10,i))+ans;
            n = n >> 1;
            i++;
        }
        printf("%d",ans); 
        break;
        case 2:
        printf("Binary to Decimal Convertor\n");- 
        printf("Enter the binary number\n");
        scanf("%d",&n);     
        while(n!=0)
        {
            int digit=n%10;
            if(digit==1)
            {
                ans=ans+pow(2,i);
            }
            n/=10;
            i++;
        }
        printf("%d",ans);
        break;
        default:
        printf("Enter correct choice\n");
    }
}