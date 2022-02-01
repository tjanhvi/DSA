#include<bits/stdc++.h>
using namespace std;

class Array{
    public:
    int A[20];
    int size = 20;
    int length;

};

void Display(Array arr){
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;   
}

//Single Missing Element in Sorted Array
void singleMissing(Array arr){
    int total = (arr.A[arr.length-1])*(arr.A[arr.length-1]+1)/2;
    int sum = 0;
    for (int i = 0; i < arr.length; i++){
        sum += arr.A[i];
    }
    if (total != sum){
        cout << "Missing element in the list is: " << total-sum << endl;
    } 
}

//Multiple Missing Element in Sorted Array
void multipleMissing(Array arr){
    int diff = arr.A[0];
    for (int i = 0; i < arr.length; i++){
        if(diff != arr.A[i]-i){
                cout << "Missing elements is: " << i+diff << endl;
                break;
        }
    }
}

//Finding missing element using hashing
/*------*/   

int main(){
    Array arr;
    int n;
    arr.length = 0;
    cout << "Enter length of array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr.A[i];
    }
    
    arr.length = n;
    Display(arr);
    singleMissing(arr);
    multipleMissing(arr);

    return 0;
}
