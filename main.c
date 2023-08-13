#include <stdio.h>
#include <stdlib.h>

int main()
{float a,b,c;
float avg;
    printf("ENTER RESULT a?:");
    scanf("%f",&a);
    printf("ENTER RESULT b?:");
    scanf("%f",&b);
    printf("ENTER RESULT c?:");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("%.2f\n",avg);
    if(avg<10)
        printf("fail");
    else if(avg>=10 && avg<12)
        printf("pass");
    else if(avg>=12 && avg<14)
        printf("above pass");
    else if(avg>=14 && avg<16)
        printf("merit");
    else printf("distinction");

    return 0;
}
