#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, pos;
    cin>>n;

    int arr[n];
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    
    cout << "Enter the position: " << endl;

    cin >> pos;

    for (int i = pos; i <= n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    cout << "The elements are : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    

    return 0;
}