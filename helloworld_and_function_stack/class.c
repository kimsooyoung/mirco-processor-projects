#include <stdio.h>

int add(int a, int b){
    int sum;

    sum = a + b;
    return sum;
}

int main(){
    int x;
    int y;
    int z;

    x = 6;
    y = 5;
    z = add(x, y);

    return 0;
}