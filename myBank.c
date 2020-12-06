#include "myBank.h"
#include "stdio.h"
float array [CLIENTS][2]={0};
void O(float amount)
{
    int boolean=0;
    for(int i=0;i<CLIENTS&&boolean==0;i++)
            if(array[i][1]==0)
            {
                array[i][1]=1;
                array[i][0] = amount;
                boolean=1;
                printf("New account number is:%d\n",901+i);
            }
    if(boolean==0)
        printf("no space!!");

}
void B(int account_number)
{

    if(array[account_number-901][1]==1)
    {
        printf("The balance of account number %d is:%.2f\n", account_number,array[account_number - 901][0]);
        return;
    }
    printf("This account is closed\n");
}

void D(float amount,int account_number)
{
    
         array[account_number-901][0]=array[account_number-901][0]+amount;
        printf("The new  balance is : %.2lf", array[account_number - 901][0]);
        return;
 }


void W(int account_number,float amount)
{
    
    
    if(array[account_number-901][0]<amount) {
        printf("Cannot withdraw more than the balance\n");
        return;
    }
    array[account_number-901][0]=array[account_number-901][0]-amount;
    printf("The new balance is: %.2f\n",array[account_number-901][0]);

}

void C(int account_number)
{

    array[account_number-901][1]=0;
    printf("Closed account number %d\n",account_number);


}

void I(int interest_rate)
{
    for (int i = 0; i < CLIENTS; ++i)
        if(array[i][1]==1)
            array[i][0]=array[i][0]*(1+interest_rate/100.0);


}

void P()
{
    for (int i = 0; i <CLIENTS ; ++i) {
        if(array[i][1]==1)
            printf("The balance of account number %d is: %.2f\n",i+901,array[i][0]);
    }
}

void E()
{
    for (int i = 0; i <CLIENTS ; ++i)
        array[i][1]=0;
}

int checkOpen(int account_number)
{
    return array[account_number-901][1];
}

