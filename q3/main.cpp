#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fun(int arr[], int n, int x, int y)
{
    int temp= -1, dist = INT_MAX;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            if( temp != -1 && arr[i] != arr[temp])
                dist = min(dist , i-temp);
            temp=i;
        }
    }
    if(dist==INT_MAX)
        return -1;
    return dist;
}
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY\n";
    cin>>n;
    int arr[n],i;
    cout<<"ENTER ELEMENTS IN ARRAY\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"ENTER X AND Y\n";
    int x,y;
    cin>>x>>y;

    cout<<"DISTANCE IS "<<fun(arr,n,x,y);
    return 0;
}
