#include <stdio.h>

int main(){
    float a, b;
    char c_op;  // operation character input

    // Printing Instructions
    printf("_____________________\n");
    printf("Simple Calculator!!!\n");
    printf("_____________________\n\n");
    printf("Add: a\nSubtract: s\nMultiply: m\nDivide: d\n");
    printf("Exit: e\n\n");

    // Loop to run this endlessly until pressed e
    while(1){
        printf("Enter Operation: ");
        scanf(" %c", &c_op);    // notice the space before
                                // %c in print function?
        if(c_op == 'e')
            break;              // exit the loop if pressed e

        printf("Enter Two Numbers: ");
        scanf("%f %f", &a, &b);

        // check for each math operations
        if(c_op == 'a')
            printf("Add= %.2f\n\n", a+b);
        else if(c_op == 's')
            printf("Sub= %.2f\n\n", a-b);
        else if(c_op == 'm')
            printf("Mul= %.2f\n\n", a*b);
        else if(c_op == 'd')
            printf("Div= %.2f\n\n", a/b);
    }
    return 0;
}