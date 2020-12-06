#include <stdio.h>
#include "myBank.h"

int main()
{
    int account;
    float amount;
    int  rate;
    char c; 
    int b=1;
    while(b)
    {
        printf("\n");
        printf("Please choose a transaction type:\n O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n");
        do 
        {
            scanf("%c",&c);
        }
        while(c==10||c==' ');
        switch(c)
        {
            case 'O':
            {
                printf("Please enter amount for deposit:");
                if(scanf("%f",&amount)==0){
                    printf("Failed to read the amount\n");
                    break;
                }
                if(amount<0){
                    printf("Invalid Amount\n");
                    break;
                }
                else 
                O(amount);
                break;
            }

            case 'B':
            {
                printf("Please enter account number:");
                if(scanf("%d",&account)==0){
                    printf("Failed to read the account number\n");
                    break;
                }
                if(account<901||account>950)
                {
                    printf("Invalid account number");
                    break;
                }
                if(checkOpen(account)==0)
                 {
                    printf("This account is closed\n");
                    break;
                 }   
                else B(account);
                break;
            }

            case 'D':
            {
                printf("Please enter account number:");
                if(scanf("%d",&account)==0){
                    printf("Failed to read the account number\n");
                    break;
                }
                 if(account<901||account>950)
                {
                    printf("Invalid account number");
                    break;
                }   

                 if(checkOpen(account)==0)
                 {
                    printf("This account is closed\n");
                    break;
                }
                printf("Please enter amount for deposit:");
                 if(scanf("%f",&amount)==0){
                    printf("Failed to read the amount\n");
                    break;
                 }
                 if(amount<0)
                 {
                     printf("Cannot deposit a negative amount");
                     break;
                 }
                else
                    D(amount,account);
                break;
            }

            case 'W':
            {
                printf("Please enter account number: ");
                if(scanf("%d",&account)==0){
                    printf("Failed to read the account number\n");
                    break;
                }
                 if(account<901||account>950)
                {
                    printf("Invalid account number");
                    break;
                }
                if(checkOpen(account)==0)
                 {
                    printf("This account is closed\n");
                    break;
                 }      
                printf("Please enter the amount to withdraw: ");
                  if(scanf("%f",&amount)==0)
                  {
                    printf("Failed to read the amount\n");
                    break;
                  }
                  if(amount<0)
                  {
                      printf("Cannot deposit a negative amount");
                      break;
                  }
                else W(account,amount);
                break;
            }

            case 'C':
            {
                printf("Please enter account number:");
                if(scanf("%d",&account)==0){
                    printf("Failed to read the account number\n");
                    break;
                }
                 if(account<901||account>950)
                {
                    printf("Invalid account number");
                    break;
                }
                if(checkOpen(account)==0)
                 {
                    printf("This account is already closed\n");
                    break;
                 }   

                else C(account);
                break;
            }

            case 'I':
            {
                printf("Please enter interest rate:");
                if(scanf("%d",&rate)==0){
                    printf("Failed to read the interest rate\n");
                    break;
                }
                if(rate>99||rate<0)
                {
                    printf("Invalid interest rate");
                    break;
                }
                else I(rate);
                break;
            }

            case 'P':
            { 
                P();
                break;
            }

            case 'E':
            {
                E();
                b=0;
                break;
            }

            default:
                printf("Invalid transaction type\n");
            
        }
    }

}