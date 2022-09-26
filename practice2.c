// covert
#include <stdio.h>

int main()
{
    // int calsius;
    // float far;

    // printf("enter the celsius\n", &calsius);
    // scanf("%d", &calsius);
    // far = (calsius * 9 / 5) + 32;
    // printf("temperature at this time in fahrenheit is %f", far);
    int simpleIntrest,principal,time;
    float rate;
//    int simpleIntrest=(principal*rate*time)/100;
    printf("enter the principal value \n ");
    scanf("%d",&principal);
    printf("enter the value of rate\n");
    scanf("%f",&rate);
    printf("enter the time period\n");
    scanf("%d",&time); 
    printf("the simpleInterest is %d", simpleIntrest=(principal*rate*time)/100);
    return 0;
}