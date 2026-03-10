#include<iostream>
using namespace std;

int main()
{
    int n,rem,rev,n1;

    cout<<"Enter n: ";
    cin>>n;

    n1=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(n1==rev)
    {
        cout<<"Palindrome Number";
    }
    else
    {
        cout<<"Not Palindrome Number";
    }
    return 0;
    
}