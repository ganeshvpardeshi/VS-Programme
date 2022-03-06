#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class ATM
{
    public:
/*     //Members of this Class : 
        void withdraw();
        void balanceE();
        void pinreset(int PIN); */
        
        int cb=100000;
        int wb;
        int PIN = 7020;

    void withdraw()
    {          
        
        if(cb == 0)
        {
            cout<<"\nThere is no Money in your Account. Thank You.\n"<<endl;
        }
        else
        {
            cout<<"Enter the Amount to Withdraw : ";
            cin>>wb;

            if(cb<wb)
            {
                cout<<"Insufficient Balance in your account."<<endl;
                cout<<"The Balance is "<<cb<<"/-\n"<<endl;
                return;
            }
            cb = cb - wb;
            cout<<"The "<<wb<<"/- amount was withdraw";
            cout<<", And the Current Balance is "<<cb<<"/-\n"<<endl;

        }
    }

    void balanceE()
    {
        cout<<"\nThe Balance in the Account is "<<cb<<"/-\n"<<endl;
    }

    void Deposit()
    {
        int dep;
        cout<<"\nHow many Money do you want to deposit : ";
        cin>>dep;

        cb = cb + dep;
        cout<<"\nThe Total Balance is "<<cb<<"/-\n"<<endl;
    }

    int pinreset(int PIN)
    {
        int pin;
        cout<<"\nInsert New Pin : ";
        cin>>pin;

        PIN = pin;

        cout<<"\nNow Your Current Pin is : "<<PIN<<endl<<endl;
        return PIN;
    }
};
void ATMTransation(int PIN){

    int ch;
    ATM a;

    while(1)
    {
        cout<<"Press 1. for Withdraw."<<endl;
        cout<<"Press 2. for Deposit."<<endl;
        cout<<"Press 3. for Balance Equery."<<endl;
        cout<<"Press 4. for Pin Reset "<<endl;
        cout<<"Press 5. for Exit."<<endl;
        cout<<"Press 6. for Go to DashBorad. "<<endl;

        cout<<"Enter the Choise : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            a.withdraw();
            break;
        
        case 2:
            a.Deposit();
            break;    

        case 3:
            a.balanceE();
            break;

        case 4:
            a.pinreset(PIN);
            break;

        case 5 :
            exit(0);

        case 6:
            return ;

        default:
            cout<<"Wrong Input. Please Enter the correct input."<<endl;
            break;
        }
    }
}
int main()
{

//    x :
    ofstream fout;
    int pin;
    ATM a;

    int j=0;
    int i=1,n=3;
    char b ;
    while(i<=n)
    {
        cout<<"Enter the your 4-digit Pin : ";
        cin>>pin;
        if(pin == a.PIN)
        {
            fout.open("Accounts.txt",ios::app);
            fout<<" "<<pin;
            fout.close();

            ATMTransation(a.PIN);

        }
        else{
            cout<<"\nThere are "<<n-i<<" attempts are remaining."<<endl;
        }
        i++;
        cout<<"To Exit Press ""y"" or to Continue to ""n"": ";cin>>b;
        if(b == 'y'){
           exit(0);}
        else{
           continue;}
    }


    if(i==4)
    {
        cout<<"Your Card is Blocked, try after some time.\n"<<endl;
    }
}