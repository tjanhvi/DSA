/*upper to lower*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[] = "WELCOME\0";
    int i;
    for(i=0;A[i]!='\0';i++){
        A[i] += 32;
    }
    cout << A;
    return 0;
}


/*lower to upper*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[] = "welcome\0";
    int i;
    for(i=0;A[i]!='\0';i++){
        A[i] -= 32;
    }
    cout << A;
    return 0;
}

/*conversion without affecting numbers and special characters*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[] = "Welcome!123\0";
    int i;
    for(i=0;A[i]!='\0';i++){
        if(A[i]>=65 && A[i]<=90){
            A[i] += 32;
        }
        else if(A[i]>=97 && A[i]<=122){
            A[i] -= 32;
        }     
    }
    cout << A;
    return 0;
}