#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int i, num, n=6;
    int arr[6]= {10,20,30,40,50};
    
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter element for insertion at the beginning: ";
    cin>>num;
    
    for (i = n-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0]=num;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}