#include<bits/stdc++.h>
using namespace std;

int search(int n, int arr[], int x){
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){

    int n, value;
    cin>>n;

    int arr[n];
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    
    cout << "Enter the value: " << endl;

    cin >> value;
    
    int result = search(n,arr,value);
    
    if (result == -1){
        cout << "Not Found";
    }
    else{
        cout << "Found";
    }

    return 0;
}