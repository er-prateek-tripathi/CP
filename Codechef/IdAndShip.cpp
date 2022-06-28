#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		char b;
        cin>>b;
        b = toupper(b);
        switch(b) {
            case 'B' : cout<<"BattleShip\n";
                break;
            case 'C' : cout<<"Cruiser\n";
                break;
            case 'D' : cout<<"Destroyer\n";
                break;
            case 'F' : cout<<"Frigate\n";
                break;
            default : break;
        }
	}
}