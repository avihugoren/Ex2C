
#ifndef EX2_MYBANK_H
#define EX2_MYBANK_H
#define CLIENTS 50

void O(float amount);

void B(int account_number);

void D(float amount,int account_number);

void W(int account_number,float amount);

void C(int account_number);

void I(int interest_rate);

void P();

void E();

int checkOpen(int account_number);


#endif
