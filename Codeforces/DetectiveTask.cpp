#include<iostream>
#include<vector>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--){
        vector<int> V;
        int input, count = 0;

        while(cin>>input){
            V.push_back(input);
        }
        for (auto &it : V){
            if(V.size() == 1 && (V[it] == 0 || V[it] == 1)) count++;
            else if(V.size() > 1){
                if(v[it] == 1 || v[it] == 0){
                    it++;
                }
                else count++;
            }
        }

    }
    return 0;
}