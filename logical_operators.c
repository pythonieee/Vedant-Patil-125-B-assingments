#include <stdio.h>
int main(int argc, char const *argv[])
{
    // the logical operators contains &&(and) , ||(or) , !(not)
    int a =10, b=-20;
    // use of &&(and) operator using if else clause
    if (a>0 && b>0)
    {
        printf("Both the numbers are greater than 0\n");
    }
    else
    {
        printf("One of  the number is less than 0\n");

    } 
    // use of ||(or) operator using if else clause
    if (a>0 || b>0)
    {
        printf("One the numbers are greater than 0\n");
    }
    else
    {
        printf("None of  the number is less than 0\n");

    }
    // use of !(not) operator using if else clause
    if (!(a>0 && b>0))
    {
        printf("Both the numbers are greater than 0\n");
    }
    else
    {
        printf("One of  the number is less than 0\n");

    }

    return 0;
}
