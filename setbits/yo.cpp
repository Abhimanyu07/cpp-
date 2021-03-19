#include<iostream>
using namespace std;
int return_setbit(int num)
{
int count = 0;
for(long bit=31;bit>=0;bit--)
{
	long mask = (1L<<bit);
	long ibit = mask&num;
	if(ibit!=0) count++;
}
return count;
}
int main()
{   
int i=46;
cout<<return_setbit(i);
}