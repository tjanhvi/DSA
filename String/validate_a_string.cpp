/*validation of a string means you string should be of letter and numbers not of special characters*/
#include<bits/stdc++.h>
using namespace std;

bool valid(string name)
{
    int i;

    if(!((name[0] >= 'a' && name[0] <= 'z') || 
         (name[0] >= 'A' && name[0] <= 'Z') || 
         name[0] == '_'))
        return false;
    
    for(i=1; name.length(); i++){
        if(!((name[i] >= 'a' && name[i] <= 'z') || 
             (name[i] >= 'A' && name[i] <= 'Z') || 
             (name[i] >= '0' && name[i] <= '9') || 
             name[i] == '_'))
            return false;
    }
    return true;
}

int main(){

    string name = "Jan?123";

    if(valid(name)){
        cout << "Valid string" << endl;
    }
    else{
        cout << "Invalid string" << endl;
    }

    return 0;
}