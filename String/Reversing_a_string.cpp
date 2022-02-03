/*1st method using two array*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[] = "python";
    char B[7];
    int i,j;

    for(i=0; A[i] != '\0'; i++){
    }
    i=i-1;
    for(j=0; i >= 0;i--, j++){
        B[j] = A[i];
    }
    B[j]='\0';
    cout << B;


    return 0;
}


/*2nd methods using swaping in same array*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[] = "python";
    int i,j,temp;

    for(j=0; A[j] != '\0'; j++){
    }
    j=j-1;
    for(i=0; i < j; i++, j--){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    cout << A;


    return 0;
}