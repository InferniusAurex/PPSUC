#include <stdio.h>

int main()
{
    int a = 5, b=3;
    int bitwise_result;

    printf("after unary ++, a is: %d\n", ++a);
    bitwise_result= a&b;

        printf("Bitwise & result: %d\n", bitwise_result);

            return 0;

}

