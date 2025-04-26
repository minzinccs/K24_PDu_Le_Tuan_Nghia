#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int snt(int n)
{

    for(int i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            return 0;
        }

    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    if (n<=2){
        cout<<"Khong co so nguyen to";
        return 0;
    }
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(snt(i)==1){
            cout<<i<<" ";
            count+=1;
        }
    }
    if(count==0)
    {
        cout<<"Khong co so nguyen to";
    }
}


