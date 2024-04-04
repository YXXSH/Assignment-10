#include<stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main () {
    union Data data;

    data.i = 10;
    printf("Value of i: %d\n", data.i);

    data.f = 3.14;
    printf("Value of f: %.2f\n", data.f);

    data.c = 'A';
    printf("Value of c: %c\n", data.c);

    return 0;
}