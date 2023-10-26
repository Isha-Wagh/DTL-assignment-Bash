#include<stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float div(float a, float b);
float pow(float a, float b);

int main(){

    float num1, num2;
    int choice;

    printf("Enter num1 : ");
    scanf("%f", &num1);
    printf("Enter num2 : ");
    scanf("%f", &num2);

    printf("\n**********OPERATIONS**********\n");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n\n");

    printf("Enter your choice : ");
    scanf("%d", &choice);

    printf("\n");

    switch(choice){
        case 1:
            add(num1, num2);
            break;
        case 2:
            sub(num1, num2);
            break;
        case 3:
            mult(num1, num2);
            break;
        case 4:
            div(num1, num2);
            break;
        case 5:
            pow(num1, num2);
        default:
            printf("Invalid Choice!");
    }


    return 0;
}

float add(float a, float b){
    float c = a + b;
    printf("%.2f + %.2f = %.2f", a, b, c);
    return c;

}

float sub(float a, float b){
    float c = a - b;
    printf("%.2f - %.2f = %.2f", a, b, c);
    return c;

}

float mult(float a, float b){
    float c = a * b;
    printf("%.2f X %.2f = %.2f", a, b, c);
    return c;


}

float div(float a, float b){
    float c = a / b;
    printf("%.2f / %.2f = %.2f", a, b, c);
    return c;
}

float pow(float a, float b){
    float i 
}
