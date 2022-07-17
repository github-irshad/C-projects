//Simple Calculator
#include<stdio.h>
#include<math.h>


float value1,value2,answer;
char operatorSelect;


int main(){



    printf("Enter first value \n");
    scanf("%d",&value1);

    printf("Enter second value \n");
    scanf("%d",&value2);

    printf("Select operation:  \n");

    scanf(" %c",&operatorSelect);





switch(operatorSelect){

case '+' :
    answer = value1 + value2;
    break;
case '-' :
    answer = value1 - value2;
    break;
case '*' :
    answer = value1*value2;
    break;
case '/':
    answer = value1/value2;
    break;
default:
    printf("Select proper operator\n");



}

printf("Answer is %f",answer);

return 0;
}
