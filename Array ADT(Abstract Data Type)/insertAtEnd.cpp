#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int i, num, n=6;
    int arr[6]= {10,20,30,40,50};
    
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter element for insertion at the end: ";
    cin>>num;
    
    arr[n-1]=num;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   
   int arr[n];
   for (int i = 0; i < n-1; i++) {
       cin>>arr[i];
   }
   
   int num;
   cout<<"Enter the element which you want to insert at the end: ";
   cin>>num;
   cout<<endl;
   
   arr[n-1] = num;
   
   for (int i = 0; i < n; i++) {
       cout<<arr[i]<<" ";
   }

    return 0;
}
*/