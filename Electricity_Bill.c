#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=199)
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",n,1.20,n*1.20,0.00,(n*1.20+0.00));
   else if(n>=200&&n<400)
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",n,1.40,n*1.40,0.00,(n*1.40+0.00));
   else if(n>=400&&n<600)
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",n,1.60,n*1.60,(n*1.60*0.15),((n*1.60)+(n*1.60*0.15)));
   else if(n>=600&&n<800)
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",n,1.80,n*1.80,(n*1.80*0.15),((n*1.80)+(n*1.80*0.15)));
   else if(n>=800)
   printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",n,2.00,n*2.00,(n*2.00*0.15),((n*2.00)+(n*2.00*0.15)));
    
}