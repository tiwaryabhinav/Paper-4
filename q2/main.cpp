#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"ENTER SIZE OF ARRAY\n";
   cin>>n;
   int arr[n],i;
   cout<<"ENTER ELEMENTS IN ARRAY\n";
   for(i=0;i<n;i++)
    cin>>arr[i];

    for (int i = 0; i < n; i++) {
        arr[arr[i]%n]
            = arr[arr[i]%n]+n;
    }
    cout << "REPEATING ELEMENTS ARE: " <<"\n";
    for (int i = 0; i <n; i++) {
        if (arr[i] >= n * 2) {
            cout << i << " " <<"\n";
        }
    }
    return 0;
}
