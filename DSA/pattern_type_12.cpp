/*
n = 4
****
 ***
  **
   *
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 4;
int i = 1;
while(i<=n){
    int space = i-1;
    while(space){
        cout<<" ";
        space -= 1;
    }
    int j = 1;
    int star = n-i+1;
    while(star){
        cout<<"*";
        star--;
        j+=1;
    }
    cout<<endl;
    i+=1;

}

return 0;
}
