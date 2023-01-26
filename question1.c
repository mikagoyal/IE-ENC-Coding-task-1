//question 1: prime, coprime. circular prime
#include <stdio.h>
#include <math.h>

int IsPrime(int num)
{
    int i, prime=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            prime++;
        }
    }
    if(prime==0)
    return 0;
    else
    return 1;
}

int DigitCount(int num)
{
    int c=0;
    while(num>0)
    {
        c++;
        num = num/10;
    }
    return c;
}

int CircularPrime(int num)
{
    int c=0, temp, sum, f=0, j=1, p, p1, rem, i;
    c = DigitCount(num);

    while(c!=0)
    {
        temp = num;
        c--;
        p= pow(10,c);
        p1=pow(10,j);
        rem= temp*p1;
        sum= rem*p+temp;
        j++;
        if(IsPrime(sum)!=1)
        {
            f==1;
        }
    }
    if(f==1)
    printf("%d is circular prime \n", num);
    else
    printf("%d is not circular prime \n", num);
}
int main()
{
    int num1, num2, i, hcf;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);

//prime
    if(IsPrime(num1)==0)
    printf("%d is a prime number \n", num1);
    else 
    printf("%d is not a prime number \n", num1);

    if(IsPrime(num2)==0)
    printf("%d is a prime number \n", num2);
    else 
    printf("%d is not a prime number \n", num2);

//co prime
    for(i=1; i<num1; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }

    if(hcf==1)
    printf("%d and %d are co prime \n", num1, num2);
    else
    printf("%d and %d are not co prime \n", num1, num2);

//circular prime
    CircularPrime(num1);
    CircularPrime(num2);

}