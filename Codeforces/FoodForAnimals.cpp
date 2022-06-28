#include<iostream>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll dogFood, catFood, allFood, numDogs, numCats;
        cin>>dogFood>>catFood>>allFood>>numDogs>>numCats;
        bool Trackk= true;
        bool flag = true;
        if(allFood + dogFood >= numDogs ){
            if(dogFood < numDogs){ //True
            if(allFood + dogFood - numDogs + catFood - numCats >= 0){
                Trackk = false;
            }
            }
            else if (allFood + catFood - numCats >= 0)
                Trackk = false;
        }
        if(Trackk == true) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        

    }

    return 0;
}

// 0 = dogFood
// 1 = catFood 
// 2 = allFood 
// 3 = numDogs
// 4 - numCats