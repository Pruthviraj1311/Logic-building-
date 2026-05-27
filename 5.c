//Accept a no. from user and check even or odd...

#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) ==0 )
    {
        return True;
    }
    else
    {
        return False;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter a no:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == True)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}