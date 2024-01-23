#include <stdio.h>
#include <math.h>
int binaryToDecimal(long b);
int main()
{
    long binarynum;
    printf("Enter a binary number: ");
    scanf("%ld", &binarynum);

    printf("Equivalent decimal number is: %d", binaryToDecimal(binarynum));
    return 0;
}
int binaryToDecimal(long b)
{
    int decimalnum = 0, temp = 0, remainder;
    while (b!=0)
    {
        remainder = b%10;
        b= b/10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}

