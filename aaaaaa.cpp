//Name -- najam ul saqib
//F/N  -- saifullah
//R/N  -- 33
//-------------------------------------------//

#include <stdio.h>
int isprime(int num)
{
    if (num < 2)
    return 0;
    for (int s= 2; s * s <= num; s++)
	{
    if (num % s == 0)
    return 0;
    }
    return 1;
}
    int main()
	 {
    int input;
    while (1) {
        printf("Enter a number between  2 and 100: ");
        scanf("%d", &input);
        if (input >= 2 && input <= 100) {
        int result = isprime(input);
        if (result == 1)
        printf("The number you have entered is a prime nmber .\n");
        else
        printf("The number you have entered is not a prime number.\n");
         break;
        } else {
        printf(" The number you have entered is out of range press 1 to retry : ");
        int retry;
        scanf("%d", &retry);
        if (retry != 1)
        break;
        }
    }
    return 0;
}
 