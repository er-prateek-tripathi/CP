/* 
if cout<<"*"<<" ";
n = 4
   *
  * *
 * * *
* * * *

if cout<<"*";
n = 4
   *
  **
 ***
****
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls"); 
int n = 4;
int i = 1;
while(i<=n){
    int space = n-i;
    while(space){
        cout<<" ";
        space -= 1;
    }
    int j = 1;
    while(j<=i){
        cout<<"*";
        j+=1;
    }
    cout<<endl;
    i+=1;
}

return 0;
}
