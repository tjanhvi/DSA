//recursive method
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int h, int x){    
    if (h >= l){
        int mid = (l+h)/2;
        
        if (arr[mid] == x){
            return mid;
        }
        else if (arr[mid] > x){
            return binarySearch(arr, l, mid-1, x);
        }
        else{
            return binarySearch(arr, mid+1, h, x);
        }
    }
    return -1;
}

int main(){

    int n, value;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter the value: " << endl;

    cin >> value;
    
    int result = binarySearch(arr, 0, n, value);
    
    if (result == -1){
        cout << "Not Found";
    }
    else{
        cout << "Found at index " << result;
    }
    

    return 0;
}


//iterative method
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int h, int x){
    
    while (l <= h){
        int mid = (l+h)/2;
        
        if (arr[mid] == x){
            return mid;
        }
        else if (arr[mid] > x){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int main(){

    int n, value;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout << "Enter the value: " << endl;

    cin >> value;
    
    int result = binarySearch(arr, 0, n, value);
    
    if (result == -1){
        cout << "Not Found";
    }
    else{
        cout << "Found at index " << result;
    }
    

    return 0;
}