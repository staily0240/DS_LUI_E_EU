#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    
    int *ptr1 = &a; // ponteiro para a variável 'a'
    int *ptr2 = &b; // ponteiro para a variável 'b'
    int *ptr3 = &c; // ponteiro para a variável 'c'
    
    printf("Valor de a: %d\n", *ptr1);
    printf("Valor de b: %d\n", *ptr2);
    printf("Valor de c: %d\n", *ptr3);
    
    return 0;
}
