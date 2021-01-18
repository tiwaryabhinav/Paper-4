#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define INF 9999999999
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY\n";
    cin>>n;
    int arr[n],i;
    cout<<"ENTER ELEMENTS IN ARRAY\n";
    for(i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    int l=0,r=n-1,min_sum=INF,sum,i1,i2;
    while(l<r)
    {
        sum=arr[l]+arr[r];
        if(sum<min_sum)
        {
            min_sum=sum;
            i1=l;
            i2=r;
        }
        else if(sum>0)
            r--;
        else
            l++;
    }

    cout<<"ELEMENTS WHOSE SUM IS CLOSEST TO 0 ARE "<<arr[i1]<<" AND "<<arr[i2];
    return 0;
}
