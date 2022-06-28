#include <iostream>

int main()
{
    int t,a,z;
    std::cin >> t;
    while(t--){
        int rem,rev=0;
        std::cin >> a;
        z=a;
        while(a!=0){
            rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        if(z==rev){
            std::cout << "wins" << std::endl;
        }
        else{
            std::cout << "loses" << std::endl;
        }
    }
    return 0;
}