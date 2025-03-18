#include<iostream>
using namespace std;
class Bank_account{
    private:
    string name;
    int ID;
    string city;
    int age;
    float balance;
public:
Bank_account(string n,int i,string c,int a,float b){
    name=n;
    ID=i;
    city=c;
    age=a;
    balance=b;
}
void deposit(float amount){
    if(amount>0){
        balance=balance+amount;
    }
    else{
        cout<<"Invalid";
    }
}
    void withdraw(float amount){
        if(amount<balance){
            balance=balance-amount;
        }
        else{
            cout<<"Invalid";
        }
    }

void display(){
    cout<<"Account holder name is : "<<name<<endl;
    cout<<"Account holder age is : "<<age<<endl;
       cout<<"Account holder city is : "<<city<<endl;
    cout<<"Account holder ID is : "<<ID<<endl;
    cout<<"Account holder balance is : "<<balance<<endl;
}

};
int main(){
    Bank_account b("Danish",762289,"Karachi",19,50000);
    b.display();
    cout<<endl;
    cout<<"After Deposit"<<endl;
    b.deposit(10000);
b.display();
cout<<endl;
cout<<"After Withdraw";
cout<<endl;
b.withdraw(40000);
b.display();
}