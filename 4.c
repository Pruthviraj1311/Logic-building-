//accept no. from user and display 1st no. in 2nd no. of times
#include<stdio.h>

int  Display(int iNo, int iFrequency)
{
    int i =0;
    for(i=1; i<= iFrequency; i++)
    {
        printf("%d\t",iNo);

    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a no:");
    scanf("%d",&iValue);

    printf("Enter a frequency:");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}