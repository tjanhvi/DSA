#include<bits/stdc++.h>
using namespace std;

int insertSorted(int n, int arr[], int x){
    int i = n-1;
    while(arr[i] > x){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = x;

    return (n+1);
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    int result = insertSorted(n, arr, 45);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}