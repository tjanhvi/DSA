/*using hash table*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[] = "finding";
    int i, H[26];

    for(i=0; A[i]!='\0'; i++){
        H[A[i]-97] += 1;
    }
    for(i=0; i<26; i++){
        if(H[i]>1){
            cout << i+97;
            cout << H[i];
        }
    }


    return 0;
}