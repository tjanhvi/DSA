#include<bits/stdc++.h>
using namespace std;

class mergeArray {
    public:
    // Merge() function will merge the elements of array1 and array2 in array3. 
    void mergingArray(int a1[], int a2[], int a3[], int n1, int n2){
        int i=0, j=0, k=0;

        while(i<n1 && j<n2){
            /* if element of array1 is smaller then 
             * copy the element of array1 in array3
             */
            if(a1[i] < a2[j]){
                a3[k++] = a1[i++];
            }
            /* if element of array2 is small then
             * copy the element of array2 in array3
             */
            else{
                a3[k++] = a2[j++];
            }
        }
        
        // Copy remaining elements of first array.
        while(i<n1){
            a3[k++] = a1[i++];
        }
        // Copy remaining elements of second array
        while(j<n2){
            a3[k++] = a2[j++];
        }
        
    }  

};

int main(){
    mergeArray ma;
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    int arr2[] = {2, 4, 60, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr1, arr1+n1);
    sort(arr2, arr2+n2);
 
    int arr3[n1+n2];
    ma.mergingArray(arr1, arr2, arr3, n1, n2);
 
    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";

}

