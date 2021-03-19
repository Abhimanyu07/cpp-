#include<iostream>
using namespace std;
int main()
{   
    int i;
    cout<<"enter a number: ";
    // cin>>i;
    i = 46; 
    int count = 0;
     for(long bit=31;bit>=0;bit--)
    {
long mask = (1L<<bit);
long biti = mask&i;
if(biti!=0) {cout<<"1"; count++;}
else cout<<"0";
if(bit==0) cout<<"\ninteger\n";

    }
 cout<<endl<<count<<endl;
    }
