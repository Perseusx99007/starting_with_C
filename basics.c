#include <stdio.h>

void function(int n, char c[]);

int add(int a, int b);

int main(void)
{


    //to print...

    /*printf("Hello, world!\n");*/


    //to take an input from the user and print it...

    /*char answer[20]; 
    printf("What is your name? \n");
    scanf("%s", answer);
    printf("Hello!!!, %s\n", answer);*/


    //to take 2 inputs from the user and check whether one is greater than the other or the same...

    /*int x;
    int y;
    printf("What is the value of x? \n");
    scanf("%d", &x);
    printf("What is the value of y? \n");
    scanf("%d", &y);

    if (x < y)
    {
        printf("The value of y is greater than x. \n");
    }
    else
    if (x > y)
    {
        printf("The value of x is greater than y. \n");
    }
    else
    {
        printf("The value of both x and y are the same. \n");
    }*/


    //using "char" and "||(or)"

    /*char c;
    printf("Do you agree? \n");
    scanf("%s", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed \n");
    }
    else
    if (c == 'n' || c == 'N')
    {
        printf("Not agreed. \n");
    }*/


    //using while loop

    /*int i;
    char text[50];
    printf("Enter text to be printed. [NOTE!!! MUST BE WITHIN 50 CHARACTERS] \n");
    scanf("%s", text);
    printf("Enter the number of times the above text should be printed :- ");
    scanf("%d", &i);

    while (i > 0)
    {
        printf("\n%s", text);
        i--;
    }*/


    //using for loop

    /*int y;
    char text[50];
    printf("Enter text to be printed. [NOTE!!! MUST BE WITHIN 50 CHARACTERS] \n");
    scanf("%s", text);
    printf("Enter the number of times the above text should be printed :- ");
    scanf("%d", &y);


    for(int i = 0; i < y; i++)
    {
        printf("\n%s", text);
    }*/


    //getting started with functions

    /*char text[50];
    printf("Enter text to be printed. [NOTE!!! MUST BE WITHIN 50 CHARACTERS] \n");
    scanf("%s", text);
    int i;
    printf("Enter the number of times the above text should be printed :- ");
    scanf("%d", &i);

    function(i, text);*/                                                              //Function Call


    // using functions to calculate

    int x ,y;
    printf("Enter first number :- ");
    scanf("%d", &x);
    printf("Enter second number :- ");
    scanf("%d", &y);

    printf("\nThe sum of %d and %d equals to :- %d", x, y, add(x,y));
}


//getting started with functions

void function(int n, char c[])
{
    for(int i = 0; i < n; i++)
    {
    printf("\n%s", c);
    }
}


// using functions to calculate

 int add(int a, int b)
{
    return a + b;
}
