#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
     long long int c,total=0,withdraw,account,diposit;
     string name,type;
   while(1){
      cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter name, Account "
             << "number, Account type\n";
        cout << "\t2. Balance Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";
        cin >> c;
        if(c==1){
          cout<<"Enter Name :";
           getline(cin, name);
          cout<<"Enter Account Number :";
          cin>>account;
          cout<<"Enter Account type :";
          cin>>type;
          cout<<"Enter Balance :";
          cin>>total;
        }
        else if(c==2){
          cout<<"Name : "<<name<<endl;
          cout<<"Account Number : "<<account<<endl;
          cout<<"Account type : "<<type<<endl;
          cout<<"Balance :"<<total<<endl;
        }
        else if(c==3){
          cout<<"Enter Amount of Deposit : ";
        cin>>diposit;
        total=(total+diposit);
          cout<<"Available balance is : "<<total<<endl;
        }
        else if(c==4){
          cout<<"Show Total Money : "<<total<<endl;
        }
        else if(c==5){
          cout<<"Enter Amount of Withdraw : ";
          cin>>withdraw;
          if(withdraw>total){
               cout<<"Sorry,It's not possible\n";
          }
          else{
                    total=(total-withdraw);
          cout<<"Available balance is : "<<total<<endl;
          }
        }
        else if(c==6){
          cout<<"Thank You\n";
          return 0;
        }
        else{
          cout<<"You Press Invalid Number.Try Again\n";
        }
        cout<<endl<<endl;
        system("pause");
        cout<<endl<<endl;
        system("cls");
   }
}
