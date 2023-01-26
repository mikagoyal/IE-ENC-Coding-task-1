//question 2: reversing a number
#include <stdio.h>
int main()
{
    int num, rev=0, rem;
    printf("enter a number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        rem = num%10;
        rev = rem + rev*10;
        num = num/10;
    }

    printf("reversed number is: %d \n", rev);
}