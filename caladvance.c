#include <stdio.h>

int main(){
    float a=-1, b;
    char c_op;

    printf("_____________________\n");
    printf("Advanced Calculator!!!\n");
    printf("_____________________\n\n");
    printf("Exit: e\n\n");

    while(1){
        printf(">>  ");
        int in_count = scanf("%f%c%f", &a, &c_op, &b);
        if(in_count==3){
            if(c_op == '+')
                printf("Ans= %.2f\n\n", a+b);
            else if(c_op == '-')
                printf("Ans= %.2f\n\n", a-b);
            else if(c_op == '*')
                printf("Ans= %.2f\n\n", a*b);
            else if(c_op == '/')
                printf("Ans= %.2f\n\n", a/b);
            else
                printf("Invalid input\n\n");
        }
        else if(getchar() == 'e'){   // getchar() gets the last input char
            printf("Exiting App\n");
            break;
        }
        else {
            printf("Invalid input\n\n");
            fflush(stdin);          // clearing input to preventing error
        }
    }
    return 0;
}