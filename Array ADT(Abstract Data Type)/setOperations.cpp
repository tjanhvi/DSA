/*Union*/
/*Intersection*/
/*Symmetric difference of two array is the all 
array elements of both array except the elements 
that are presents in both array.
SymmDiff = (arr1 - arr2) UNION (arr2 - arr1).*/

#include<bits/stdc++.h>
using namespace std;

class operations{
    public:

    void printUnion(int arr1[], int arr2[], int m, int n){
        int i=0, j=0;

        while(i<m && j<n){
            if(arr1[i] < arr2[j]){
                cout << arr1[i++] << " ";
            }
            else if(arr2[j] < arr1[i]){
                cout << arr2[j++] << " ";
            }
            else{
                cout << arr2[j++] <<  " ";
                i++;
            }
        }

        // Copy remaining elements of first array.
        while(i<m){
            cout << arr1[i++] << " ";
        }
        // Copy remaining elements of second array
        while(j<n){
            cout << arr2[j++] << " ";
        }
    }


    void printIntersection(int arr1[], int arr2[], int m, int n){
        int i=0, j=0;

        while(i<m && j<n){
            if(arr1[i] < arr2[j]){
                i++;
            }
            else if(arr2[j] < arr1[i]){
                j++;
            }
            else{
                cout << arr2[j] <<  " ";
                i++;
                j++;
            }
        }
    }


    void printDifference(int arr1[], int arr2[], int m, int n){
        int i=0, j=0;
        
        while(i<m && j<n){
            if(arr1[i] < arr2[j]){
                cout << arr1[i] << " ";
                i++;
            }
            else if(arr2[j] < arr1[i]){
                cout << arr2[j] << " ";
                j++;
            }
            else{
                i++;
                j++;
            }
        }

        while(i<m){
            cout << arr1[i] << " ";
            i++;
        }
        while(j<n){
            cout << arr2[j] << " ";
            j++;
        }
    }
};


int main(){
    operations ma;
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    int arr2[] = {5, 2, 4, 60, 7, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr1, arr1+n1);
    sort(arr2, arr2+n2);
 
    cout << "Union Array" <<endl;
    ma.printUnion(arr1, arr2, n1, n2);
    cout << endl;

    cout << "Intersection Array" <<endl;
    ma.printIntersection(arr1, arr2, n1, n2);
    cout << endl;

    cout << "Difference Array" <<endl;
    ma.printDifference(arr1, arr2, n1, n2);
    cout << endl;


    return 0;
}