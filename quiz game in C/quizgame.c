#include<stdio.h>

char userInput,optionInput,Ans,userIn;
int i;
int point =0;



int main(){

printf("\t\t\t Quiz Game\n");
printf("press S to start, E to exit , H for help, P for points obtained \n");
scanf("%c",&userInput);


switch(userInput){

case 'S':
    start(); // start function
    break;

case 'H':
    help(); //help function
    break;

case 'P':
    points(); //points function
    break;
case 'E':
    exit(1); //exits the function
default:
    printf("Enter valid value");

}

return 0;
}


int start(){

    for(i=1;i<5;i++){ // iterates 4 times


        //system("cls");

        switch(i){

    case 1:

        printf("Q%d : Capital of India \n",i);  // Question
        printf("A: delhi B: culcutta C: UP D: MP\n"); // optional Answers
        scanf(" %c",&optionInput); // Taking Users input


        Ans = 'A';   //Correct option


        if(optionInput== Ans){          //Comparing user input and correct answer

            printf("your answer is correct\n\n");
            point++;                    // increasing points
        }
        else{

            printf("Your answer is wrong\n\n");
        }

        sleep(2);               //sleep or delay of 2 seconds


        break;

    case 2:

        printf("Q%d : Capital of kerala \n",i);
        printf("A: TVM B: CLT C: MLP D: TCR\n");
        scanf(" %c",&optionInput);


         Ans = 'A';


        if(optionInput== Ans){

                printf("your answer is correct\n\n");
                point++;

        }
        else{

            printf("Your answer is wrong\n\n");
        }

        sleep(2);
        break;

    case 3:

        printf("Q%d : CM\n",i);
        printf("A: eeee B: ABCD C: VS D: Vijayan\n");
        scanf(" %c",&optionInput);


         Ans = 'D';


        if(optionInput== Ans){

            printf("your answer is correct\n\n");
            point++;
        }
        else{

            printf("Your answer is wrong\n\n");
        }
        sleep(2);

        break;

    case 4:

        printf("Q%d : FM of india \n",i);
        printf("A: modi B: uuuuur C: Nirmala D: opoop\n");
        scanf(" %c",&optionInput);


         Ans = 'C';


        if(optionInput== Ans){

            printf("your answer is correct\n\n");
            point++;
        }
        else{

            printf("Your answer is wrong\n\n");
        }
        sleep(2);

        break;

        }


    system("cls");  //clears screen

    }
    printf("Your total points = %d \n",point); //printing total points obtained

    return point; //returning points

}

void help(){

    printf("These are the instructions for playing \n ");
    printf("1\) enter proper commands\n");
    printf("2\) enter proper commands\n");
    printf("3\) enter proper commands\n");

    printf("To start the game press start, to exit press E \n\n");
    scanf(" %c",userIn);
    switch(userIn){

case 'start':
    start();
    break;

case 'E':
    exit(1);
    break;

    }
}

int points(){

    printf("points you obtained = %d",point);
}


