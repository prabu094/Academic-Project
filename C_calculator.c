/*To perform simple mathematical calculations using C program,
- Recursion function
- switch cases*/

#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
      
// function declarations   
int addition();  
int subtract();  
int multiply();  
int divide();  
int sq();  
int sqrt1();  
void exit();  
  
int main()  
{  
    
    int operand;  
    do  
    {  
        // displays the multiple operations of the Calculation
        printf("_____________________________________________________________________________");
        printf("\n \n                                C Calculator");
        printf("\n_____________________________________________________________________________");
        printf ("\n \nPick Your Operator to perform Calculation: "); 
        printf ("\n \n 1. Addition (+)   \t \t 2. Subtraction (-) \n 3. Multiplication (*) \t\t 4. Division (/)\n 5. Square (x²) \t \t 6. Square Root (√) \n 7. Exit ");
        printf("\n_____________________________________________________________________________");
        printf("\n \n Please, Enter your choice: ");      
        scanf ("%d", &op);
      
    // use switch statement to call an operation  
    switch (operand)  
    {  
        case 1:  
            addition(); /* It call the addition() function  */  
            break; // break the function  
              
        case 2:  
            subtract(); /* It call the subtract() function  */  
            break;
              
        case 3:  
            multiply(); /* It call the multiply() function */  
            break;  
              
        case 4:  
            divide(); // It call the divide() function   
            break;   
              
        case 5:  
            sq(); // It call the sq() function 
            break;   
              
        case 6:  
            sqrt1(); /* It call the sqrt1() function */  
            break;  
              
        case 7:  
            exit(0); // To exit from the program  
            break;   
              
        default:  
            printf(" \nSomething is wrong!! ");  
            break;                        
    }  
    } 
    while (operand != 7);  
      
  
    return 0;        
}  
  
  
  
// function definition  
int addition()  
{  
    int i, sum = 0, num, f_num; // declare a local variable 
    printf("                                  Addition");
    printf("\n \n*****************************************************************************");
    printf(" \nHow many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" \nEnter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" \nTotal Sum of the numbers = %d\n", sum);  
    return 0;  
}  
  
// use subtract() function to subtract two numbers  
int subtract()  
{  
    int n1, n2, res;  
    printf("                                  Subtaction");
    printf("\n \n*****************************************************************************");
    printf (" \nThe first number is: ");  
    scanf ("  %d", &n1);  
    printf (" \nThe second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" \nThe subtraction of %d - %d is: %d\n", n1, n2, res);  
}  
  
// use multiply() function to multiply two numbers  
int multiply()  
{  
    int n1, n2, res;  
    printf("                                  Multiplication");
    printf("\n \n*****************************************************************************");
    printf (" \nThe first number is: ");  
    scanf ("  %d", &n1);  
    printf (" \nThe second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 * n2;    
    printf (" \nThe multiply of %d * %d is: %d\n", n1, n2, res);  
}  
  
// use divide() function to divide two numbers  
int divide()  
{  
    int n1, n2, res;  
    printf("                                  Division");
    printf("\n \n*****************************************************************************");
    printf (" \nThe first number is: ");  
    scanf ("  %d", &n1);  
    printf ("\n The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n The division of %d / %d is: %d\n", n1, n2, res);  
}  
  
// use sq() function to get the square of the given number  
int sq()  
{  
    int n1, res; 
    printf("                                  Square");
    printf("\n \n*****************************************************************************");
    printf (" \nEnter a number to get the Square: ");  
    scanf ("  %d", &n1);  
      
    res = n1 * n1;    
    printf (" \n The Square of %d is: %d\n", n1, res);  
}  
  
// use sqrt1() function to get the square root of the given number   
int sqrt1()  
{  
    float res;  
    int n1;  
    printf("                                  Square Root");
    printf("\n \n*****************************************************************************");
    printf ("\n Enter a number to get the Square Root: ");  
    scanf ("  %d", &n1);  
  
    res = sqrt(n1);   
    printf (" \n The Square Root of %d is: %f\n", n1, res);  
}  
