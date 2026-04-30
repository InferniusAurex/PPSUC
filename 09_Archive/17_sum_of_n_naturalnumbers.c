#include <stdio.h>
int main() {
    int n,add,multiply,div;

    printf("Enter n: ");
    scanf("%d", &n);

    add = n+1;  // formula is n(n+1)/2
    multiply = n*add;
    div = multiply/2;

    printf("Sum = %d\n", div);
    return 0;
}
