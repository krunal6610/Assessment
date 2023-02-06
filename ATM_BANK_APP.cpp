/*

ATM Banking Application 

*/

#include <iostream>
#include<ctime>
using namespace std;

class Operation {
    
  
    
};

class Main_Menu{
    
    public:
    
    void display_main_menu()
    {
        
        cout<<"             "<<"ATM Main Menu"<<endl<<endl;
           cout<<"enter 1 for deposit cash"<<endl;
           cout<<"enter 2 for withdraw cash"<<endl;
           cout<<"enter 3 for balance inquiry"<<endl;
           cout<<"enter 0 for exit ATM"<<endl;
        
        
    }
};

class Account_Info{
    
    
    public:
    
    void display_acc_info(){
    
    cout<<"The name of the account holder is : Rakesh Kharva"<<endl;
    cout<<"The Account holders address is : Mumbai"<<endl;
    cout<<"The branch location is : Andheri"<<endl;
    cout<<"Account Number is : 5678"<<endl;
    
    }
    
};

int main()
{
    int choice,pin,menu;
    long balance = 60000;
    long dep_ammount;
    long widhrawal_ammount;
    //int press0;
    
    time_t t = time(NULL);
   char* dt = ctime(&t);
    
    Account_Info account_info;
    Main_Menu main_menu;
    
    cout<<"                 "<<"WELCOME TO ATM"<<endl;
    cout<<"             "<<"---------------------"<<endl;
    cout<<"     "<<"current date : "<<dt<<endl;
    cout<<"             "<<"---------------------"<<endl;
    
    cout<<"press 1 to enter your pin"<<endl;
    cout<<"Or"<<endl;
    cout<<"press 0 to get help"<<endl<<endl;
    
    cin>>choice;
    
   // cout<<choice<<endl;
   
   if(choice==1){
       
       cout<<"enter your pin number! i.e 12345"<<endl;
       cin>>pin;
       //cout<<pin<<endl;
       
       if(pin==12345){
           
           
           //cout<<"             "<<"ATM Main Menu"<<endl<<endl;
          // cout<<"enter 1 for deposit cash"<<endl;
         //  cout<<"enter 2 for withdraw cash"<<endl;
           //cout<<"enter 3 for balance inquiry"<<endl;
          // cout<<"enter 0 for exit ATM"<<endl;
           
           
           main_menu.display_main_menu();
           cin>>menu;
           //cout<<menu<<endl;
           
           switch(menu){
               
               case 1:
               cout<<"          "<<"ATM Account Deposit System"<<endl<<endl;
               
             //  cout<<"The name of the account ho8"
               
               account_info.display_acc_info();
               cout<<endl<<"present available balance : Rs. "<<balance;
               cout<<"Enter the amount to be deposited Rs. ";
               cin>>dep_ammount;
               cout<<endl << "your new available balanced ammount is Rs. "<<balance+dep_ammount <<endl<<endl;
               cout<<"Thank you"<<endl<<endl;
               cout<<"press any key to return to the main menu..."<<endl;
               
               break;
               
               case 2:
               cout<<"---------------------"<<"ATM Account Withdrawal "<<endl<<endl;
               account_info.display_acc_info();
               cout<<"present available balance: Ra. "<<balance;
               cout<<"enter the ammount to be withdrawal Rs. ";
               cin>>widhrawal_ammount;
               
               if(widhrawal_ammount<balance){
                   
                   
                   
               
               
               cout<<"your new available balanced ammount is Rs. "<<balance- widhrawal_ammount<<endl<<endl;
               cout<<"thank you "<<endl<<endl;
               cout<<"press any key to continue..."<<endl;
               }
               
               else{
                   
                   
                   cout << "insufficient available balance in your account" <<endl<<endl;
                   cout<<"sorry!!!"<<endl<<endl;
                   cout<<"press any key to continue...";
                   
               }
               break;
               
               case 3:
               cout<<"---------------------"<<"ATM Account Balance Inquiry"<<endl<<endl;
               account_info.display_acc_info();
               cout<<"your available balance is Rs. "<<balance;
               break;
               
               case 4:
               cout<<"---------------------"<<"ATM Account Exit";
               break;
               
               default:
               cout<<"---------------------"<<"error";
               
               
               
               
               
               
           }
           
           
       }
       else{
           
           cout<<"please enter correct pin"<<endl;
           
       }


   }
   
   else{
       
       cout<<"you must have correct pin number"<<endl;
       cout<<"Thanks for,your choice today!!"<<endl;
       
       cout<<"press any key to continue"<<endl;
   }

    return 0;
}







