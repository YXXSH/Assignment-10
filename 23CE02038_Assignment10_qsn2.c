#include<stdio.h>

struct S {
    int a;
    int b;
    char c;
};

union U {
    int a;
    int b;
    char c;
};

int main() {

    struct S s;
    union U u;

    int size1 = sizeof(s);
    int size2 = sizeof(u);


    printf("Size of int a: %d\n", sizeof(s.a));
    printf("Size of int b: %d\n", sizeof(s.b));
    printf("Size of character c: %d\n\n", sizeof(s.c));
    printf("Size of Structure : %d\n", size1);
    printf("Size of Union : %d", size2);
    
    return 0;
}