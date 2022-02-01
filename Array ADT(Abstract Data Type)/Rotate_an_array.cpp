#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int n, int arr[]){
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void  leftRotate(int n, int arr[], int x){
    for (int i = 0; i < x; i++){
        leftRotateByOne(n, arr);
    }
}

void rightRotateByOne(int n, int arr[]){
    int temp = arr[n-1];
    for(int i=0; i<n-1; i++){
        arr[i-1] = arr[i];
    }
    arr[0] = temp;
}

void  rightRotate(int n, int arr[], int x){
    for (int i = 0; i < x; i++){
        rightRotateByOne(n, arr);
    }
}

void  printResult(int n, int arr[]){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Array: " << endl;
    printResult(n, arr);
    leftRotateByOne(n, arr);
    //leftRotate(n, arr, 2);
    //rightRotateByOne(n, arr);
    //rightRotate(n, arr, 2);
    //cout << "Reversed Array: " << endl;
    printResult(n, arr);

    return 0;
}
