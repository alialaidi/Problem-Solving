#include <iostream>

using namespace std;

struct stPiggyBankContenet
{
    int Pennies;
    int Nickels;
    int Dimes;
    int Quarters;
    int Dollars;
};
stPiggyBankContenet ReadPiggybankContenet()
{
    stPiggyBankContenet PiggyBankContenet;
   cout <<"Enter a Pennies Number : ";
   cin >> PiggyBankContenet.Pennies;
   cout <<"Enter a Nickels Number : ";
   cin >> PiggyBankContenet.Nickels;
   cout <<"Enter a Dimes Number : ";
   cin >> PiggyBankContenet.Dimes;
   cout <<"Enter a Quarters Number : ";
   cin >> PiggyBankContenet.Quarters;
   cout <<"Enter a Dollars Number : ";
   cin >> PiggyBankContenet.Dollars;

   return PiggyBankContenet;
}

int HowManyPenny(stPiggyBankContenet PiggybankContenet)
{
    int TotalPennies;
        TotalPennies = PiggybankContenet.Pennies*1 + PiggybankContenet.Nickels*5 + PiggybankContenet.Dimes*10 +PiggybankContenet.Quarters*25+ PiggybankContenet.Dollars*100;
        return TotalPennies;
}
int main()
{
    int TotalPennies = HowManyPenny(ReadPiggybankContenet()); 
    cout<<"Total Pennies = "<<TotalPennies<<endl;
    cout<<"Total Dollars = "<<TotalPennies/100.0<<endl;

    return 0;
}