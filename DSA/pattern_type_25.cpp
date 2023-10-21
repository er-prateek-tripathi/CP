/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
system("cls");
int n = 5, i = 1;
while(i<=n){
    int j = i;
    while(j<=n){
        cout<<j-i+1;
        j++;
    }
    int start = i-1;
    while(start){
        cout<<"*";
        start-=1;
    }
    cout<<endl;
    i++;
}
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       if (i + j <= n + 1) {
//         cout << j;
//       } else {
//         cout << "*";
//       }
//     }
//     cout << endl;
//   }

return 0;
}
