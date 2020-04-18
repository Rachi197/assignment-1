#include<iostream>
using namespace std;

int main()
{
    int age;
    char in;
    cout<<"Are you a citizen of India(y/n)?\n";
    cin>>in;
    if(in=='y')
    {
    cout<<"\nOkay...\n";
    cout<<"\nEnter age of user:";
    cin>>age;
    if(age>=18)
    {
        cout<<"\nYou are eligible to vote\n";
    }
    else
    {
        cout<<"\nYou are not eligible to vote\n";
    }
    }
    else
        cout<<"Sorry,you need to be a citizen of India to cast your vote\n";
     return 0;
}
