#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[] = "How are you";
    int i, v_count=0, c_count=0, word=0;
    for(i=0;A[i]!='\0';i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
            v_count++;
        }
        else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122)){
            c_count++;
        }
        else if(A[i]==' ' && A[i-1] != ' '){
            word++;
        }
    }

    cout << "Vowels: " << v_count << endl << "Consonats: " << c_count << endl << "Words: " << word+1;

    return 0;
}