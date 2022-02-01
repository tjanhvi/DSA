#include<bits/stdc++.h>
using namespace std;

void reverseArray(int n, int arr[]){
    for(int i=0, j=n-1; i<j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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
    reverseArray(n, arr);
    cout << "Reversed Array: " << endl;
    printRresult(n, arr);

    return 0;
}
