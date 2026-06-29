#include <stdio.h>


int main(void)
{
    printf("x is %d\n", x)
    printf("y is %d\n", y)



int temp = x;
x = y;
y = temp;

printf("x is %d\n", x)
printf("y is %d\n", y)

return 0;

}