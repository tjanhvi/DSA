#include<bits/stdc++.h>
using namespace std;

void duplicate(int n, int arr[])
{
    int lastDuplicate = 0;
    int j;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1] && arr[i] != lastDuplicate){
            cout << arr[i] << " ";
            lastDuplicate = arr[i];
        }
    }

    cout << endl;

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] == arr[i+1]){
            j = i+1;
            while(arr[j] == arr[i]) j++;
            cout << arr[i] << ": " << j-i << endl;;
            i=j-1;
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    duplicate(n, arr);

    return 0;
}
