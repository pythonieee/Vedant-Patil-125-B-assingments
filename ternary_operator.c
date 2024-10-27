#include <stdio.h>
int main(int argc, char const *argv[])
{
    // ternary operator works like a single line of code for if and else 
    // only two arguments can be passed at a time
    int a=20;
    int b=10;
    int c= (a>b)?a:b;
    // if a is greater than b then the value of c will be of a , if not the value of c will be b
    printf("%i\n",c); 
    return 0;
}
