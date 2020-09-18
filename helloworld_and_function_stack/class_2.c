#include <stdio.h>

int add(int a, int b){
    int sum;

    sum = a + b;
    return sum;
}

int main(){
    int x = 6;
    int y;
    int z;

    y = 5;
    z = add(x, y);

    return 0;
}