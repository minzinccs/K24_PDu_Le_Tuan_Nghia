#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    int a[n];
    int max=4;
    cout<<"nhap so phan tu:";

    cin>>n;

    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]%3==0)
        {   
            max=a[i];
            break;
        }
    }
        for(int i=0;i<n-1;i++)
    {
        if((a[i]%3==0)&&(a[i]>max))
        {   
        }
    }
    if(max%3!=0)
    {
        cout<<"Khong co";
        return 0;
    }
    cout<<max;
}
