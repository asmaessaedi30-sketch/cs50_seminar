#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 51;
    int y = 10;

    printf("x is %d\n", x);
    printf("y is %d\n", y);



swap(&x, &y);

printf("x is %d\n", x);
printf("y is %d\n", y);

return 0;

}