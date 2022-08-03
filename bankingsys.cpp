//#include<iostream>
//#include<fstream>
//#include<cstdlib>
//#include<vector>
//#include<map>
//using namespace std;
//#define MIN_BALANCE 500
//class InsufficientFunds{};
//class Account
//{
//private:
// long accountNumber;
// string firstName;
// string lastName;
// float balance;
// static long NextAccountNumber;
//public:
// Account(){}
// Account(string fname,string lname,float balance);
// long getAccNo(){return accountNumber;}
// string getFirstName(){return firstName;}
// string getLastName(){return lastName;}
// float getBalance(){return balance;}
// 
// void Deposit(float amount);
// void Withdraw(float amount);
// static void setLastAccountNumber(long accountNumber);
// static long getLastAccountNumber();
// friend ofstream & operator<<(ofstream &ofs,Account &acc);
// friend ifstream & operator>>(ifstream &ifs,Account &acc);
// friend ostream & operator<<(ostream &os,Account &acc);
//};
//long Account::NextAccountNumber=0;
//class Bank
//{
//private:
// map<long,Account> accounts;
//public:
// Bank();
// Account OpenAccount(string fname,string lname,float balance);
// Account BalanceEnquiry(long accountNumber);
// Account Deposit(long accountNumber,float amount);
// Account Withdraw(long accountNumber,float amount);
// void CloseAccount(long accountNumber);
// void ShowAllAccounts();
// ~Bank();
//};
//int main()
//{
// Bank b;
// Account acc;
// 
// int choice;
// string fname,lname;
// long accountNumber;
// float balance;
// float amount;
// cout<<"***Banking System***"<<endl;
// do
// {
// cout<<"\n\tSelect one option below ";
// cout<<"\n\t1 Open an Account";
// cout<<"\n\t2 Balance Enquiry";
// cout<<"\n\t3 Deposit";
// cout<<"\n\t4 Withdrawal";
// cout<<"\n\t5 Close an Account";
// cout<<"\n\t6 Show All Accounts";
// cout<<"\n\t7 Quit";
// cout<<"\nEnter your choice: ";
// cin>>choice;
// switch(choice)
// {
// case 1:
// cout<<"Enter First Name: ";
//cin>>fname;
//cout<<"Enter Last Name: ";
//cin>>lname;
//cout<<"Enter initial Balance: ";
//cin>>balance;
// acc=b.OpenAccount(fname,lname,balance);
// cout<<endl<<"Congratulation Account is Created"<<endl;
// cout<<acc;
//break;
// case 2:
// cout<<"Enter Account Number:";
//cin>>accountNumber;
// acc=b.BalanceEnquiry(accountNumber);
// cout<<endl<<"Your Paisa Details"<<endl;
// cout<<acc;
//break;
// case 3:
// cout<<"Enter Account Number:";
//cin>>accountNumber;
//cout<<"Enter Balance:";
//cin>>amount;
// acc=b.Deposit(accountNumber, amount);
// cout<<endl<<"Amount is Deposited"<<endl;
// cout<<acc;
//break;
// case 4:
// cout<<"Enter Account Number:";
//cin>>accountNumber;
//cout<<"Enter Balance:";
//cin>>amount;
// acc=b.Withdraw(accountNumber, amount);
// cout<<endl<<"Amount Withdrawn"<<endl;
// cout<<acc;
//break;
// case 5:
// cout<<"Enter Account Number:";
//cin>>accountNumber;
// b.CloseAccount(accountNumber);
// cout<<endl<<"Account is Closed"<<endl;
// cout<<acc;
// case 6:
// b.ShowAllAccounts();
// break;
// case 7: break;
// default:
// cout<<"\nEnter corret choice";
//exit(0);
// }
// }while(choice!=7);
// 
// return 0;
//}
//Account::Account(string fname,string lname,float balance)
//{
// NextAccountNumber++;
// accountNumber=NextAccountNumber;
// firstName=fname;
// lastName=lname;
// this->balance=balance;
//}
//void Account::Deposit(float amount)
//{
// balance+=amount;
//}
//void Account::Withdraw(float amount)
//{
// if(balance-amount<MIN_BALANCE)
// throw InsufficientFunds();
// balance-=amount;
//}
//void Account::setLastAccountNumber(long accountNumber)
//{
// NextAccountNumber=accountNumber;
//}
//long Account::getLastAccountNumber()
//{
// return NextAccountNumber;
//}
//ofstream & operator<<(ofstream &ofs,Account &acc)
//{
// ofs<<acc.accountNumber<<endl;
// ofs<<acc.firstName<<endl;
// ofs<<acc.lastName<<endl;
// ofs<<acc.balance<<endl;
// return ofs;
//}
//ifstream & operator>>(ifstream &ifs,Account &acc)
//{
// ifs>>acc.accountNumber;
// ifs>>acc.firstName;
// ifs>>acc.lastName;
// ifs>>acc.balance;
// return ifs;
// 
//}
//ostream & operator<<(ostream &os,Account &acc)
//{
// os<<"First Name:"<<acc.getFirstName()<<endl;
// os<<"Last Name:"<<acc.getLastName()<<endl;
// os<<"Account Number:"<<acc.getAccNo()<<endl;
// os<<"Balance:"<<acc.getBalance()<<endl;
// return os;
//}
//Bank::Bank()
//{
// 
// Account account;
// ifstream infile;
// infile.open("Bank.data");
// if(!infile)
// {
// //cout<<"Error in Opening! File Not Found!!"<<endl;
// return;
// }
// while(!infile.eof())
// {
// infile>>account;
// accounts.insert(pair<long,Account>(account.getAccNo(),account));
// }
// Account::setLastAccountNumber(account.getAccNo());
// 
// infile.close();
// 
//}
//Account Bank::OpenAccount(string fname,string lname,float balance)
//{
// ofstream outfile;
// Account account(fname,lname,balance);
// accounts.insert(pair<long,Account>(account.getAccNo(),account));
// 
// outfile.open("Bank.data", ios::trunc);
// 
// map<long,Account>::iterator itr;
// for(itr=accounts.begin();itr!=accounts.end();itr++)
// {
// outfile<<itr->second;
// }
// outfile.close();
// return account;
//}
//Account Bank::BalanceEnquiry(long accountNumber)
//{
// map<long,Account>::iterator itr=accounts.find(accountNumber);
// return itr->second;
//}
//Account Bank::Deposit(long accountNumber,float amount)
//{
// map<long,Account>::iterator itr=accounts.find(accountNumber);
// itr->second.Deposit(amount);
// return itr->second;
//}
//Account Bank::Withdraw(long accountNumber,float amount)
//{
// map<long,Account>::iterator itr=accounts.find(accountNumber);
// itr->second.Withdraw(amount);
// return itr->second;
//}
//void Bank::CloseAccount(long accountNumber)
//{
// map<long,Account>::iterator itr=accounts.find(accountNumber);
// cout<<"Account Deleted"<<itr->second;
// accounts.erase(accountNumber);
//}
//void Bank::ShowAllAccounts()
//{
// map<long,Account>::iterator itr;
// for(itr=accounts.begin();itr!=accounts.end();itr++)
// {
// cout<<"Account "<<itr->first<<endl<<itr->second<<endl;
// }
//}
//Bank::~Bank()
//{
// ofstream outfile;
// outfile.open("Bank.data", ios::trunc);
// 
// map<long,Account>::iterator itr;
// for(itr=accounts.begin();itr!=accounts.end();itr++)
// {
// outfile<<itr->second;
// }
// outfile.close();
//}



// that illustrates college management
#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;

char c1;
int selectedNum;
string bookName;
string customer_name;
int flag = 0;

void studentDetails()
{

    cout << "Enter your name: ";
    getline(cin, customer_name);

    cout << "WELCOME ";
    for (int i = 0;
         i < customer_name.length();
         i++)
    {
        cout << char(toupper(
            customer_name[i]));
    }
    cout << "\n";
}

void showMenu()
{
    cout << "Welcome to the University\n";
    cout << "=  =  =  =  =  =  =  = "
         << " =  =  =  =  = \n";
    cout << "What do you want to do? plz select from below" << endl;
    cout << "=  =  =  =  =  =  =  = "
         << " =  =  =  =  = \n";
    cout << "1.Enter The Library\n2.Enter The Hostel\n3"
         << ".Enter The Square One\n";
    cout << "=  =  =  =  =  =  =  = "
         << " =  =  =  =  = \n";
}

void showLibraryMenu()
{
    cout << "- - - - - - - - - - -"
         << " - -\nLibrary\n";
    cout << "1.Issue A book\n";
    cout << "2.Self Study\n";
    cout << "- - - - - - - - - - - - -\n";
}

void selectedLibrary()
{
    cout << "if you want to continue enter y" << endl;
    cin >> c1;

    if (c1 == 'Y' || c1 == 'y')
    {
        cout << "Enter respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1)
        {
            cout << "So, You want to issue a book\n";
            cout << "Tell Us the name of the book" << endl;
            cin >> bookName;
            cout << customer_name + " issued " + bookName + " book ";
        }
        else if (selectedNum == 2)
        {
            cout << "You choose for Self Study\n";
            cout << "Kindly grab a seat and maintain the silence of the library\n";
            cout << "Happy learning" << endl;
        }
        else
        {
            cout << "plz select a valid number" << endl;
            selectedLibrary();
            return;
        }
    }
    else
    {
        cout << "you opted not to continue" << endl;
        return;
    }
}
void showHostelMenu()
{
    cout << "- - - - - - - - - - -"
         << " - -\nHostel\n";
    cout << "1.Enter the mess\n";
    cout << "2.Enter the Room\n";
    cout << "- - - - - - - - - - - - -\n";
}

void selectedHostel()
{
    cout << "Do you wish to continue?"
         << "(for yes press (Y/y ), "
         << "if no press other letter): ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y')
    {

        cout << "Enter respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1)
        {
            cout << "You Entered The Mess\n";
            cout << "What do you want to do?" << endl;
            cout << "1- Grab the food " << endl;
            cout << "2- Meet a freind " << endl;
            int mess;
            if (mess == 1)
            {
                cout << "You choose to Eat the food" << endl;
                cout << "Kindly take a seat and eat pateintly" << endl;
            }
            else if (mess == 2)
            {
                cout << "You choose to Meet your freind in the mess" << endl;
                cout << "Plz don't disturb others " << endl;
            }
            else
            {
                cout << "plz choose the correct number for hostel mess" << endl;
            }
        }
        else if (selectedNum == 2)
        {
            cout << "You Entered The Hostel Room" << endl;
            // cout << "What do you want to do?" << endl;
        }
    }
    else
    {
        cout << "you opted not to continue";
        return;
    }
}

void showSquareOneMenu()
{
    cout << "- - - - - - - - - - -"
         << " - -\nSquare One\n";
    cout << "1.Order Food\n";
    cout << "2.Look for a place to sit\n";
    cout << "- - - - - - - - - - - - -\n";
}

void selectedSquareOne()
{
    cout << "Do you wish to continue?"
         << "(for yes press (Y/y ), "
         << " if no press other letter ): ";
    cin >> c1;
    if (c1 == 'Y' || c1 == 'y')
    {
        cout << "Enter the respective number: ";
        cin >> selectedNum;
        if (selectedNum == 1)
        {
            cout << "You choose to order food from sqaure one" << endl;
            cout << "Plz open ufood app and order food from the counter you like" << endl;
        }
        else if (selectedNum == 2)
        {
            cout << "you just wanted to sit there and relax" << endl;
            cout << "go ahead and fins an empty table to sit" << endl;
        }
        else
        {
            cout << "plz select a valid number" << endl;
        }
    }
    else
    {
        cout << "You opted not to continue" << endl;
    }
}

int main()
{
    studentDetails();
    showMenu();
    cout << "Do you wish to continue?"
         << "(for yes press (Y/y ), "
         << " if no press other letter ): ";
    char c;
    cin >> c;
    if (c == 'Y' || c == 'y')
    {
        cout << "Enter respective number: ";
        int num;
        cin >> num;
        if (num == 1 || num == 2 || num == 3)
        {
            switch (num)
            {
            case 1:
                showLibraryMenu();
                selectedLibrary();
                break;
            case 2:

                showHostelMenu();
                selectedHostel();
                break;

            case 3:

                showSquareOneMenu();
                selectedSquareOne();
                break;
            }
        }
        else
        {
            flag = 1;
        }
    }
    else
    {
        flag = 1;
    }
    return 0;
}4

