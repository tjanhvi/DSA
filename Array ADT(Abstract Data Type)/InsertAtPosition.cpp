#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int i, num, p, n=6;
    int arr[6]= {10,20,30,40,50};
    
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
    cout << endl;
    cout << "Enter the position: ";
    cin >> p;

    cout << "Enter the element: ";
    cin >> num;
    cout << endl;

    for (i=n-1; i>p; i--){
        arr[i] = arr[i-1];
    }
    arr[p]=num;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}