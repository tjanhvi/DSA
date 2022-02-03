/*comparing string*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    char A[] = "Painter";
    char B[] = "Painting";

    int i,j;
    for(i=0, j=0; A[i]!='\0' && B[i]!='\0'; i++, j++){
        if(A[i]!=B[j])
            break;
    }
    if(A[i] == B[i]){
        cout << "Equal" << endl;
    }
    else if(A[i] > B[i]){
        cout << "Array B is Greater" << endl;
    }
    else{
        cout << "Array A is Smaller" << endl;
    }

    return 0;
}


/*palindorme*/
#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string A)
{
    string B = A;
    reverse(B.begin(), B.end());

    if (A == B) {
        return "Yes";
    }
    else {
        return "No";
    }
}

int main()
{
    string A = "madam";
    cout << isPalindrome(A);
 
    return 0;
}