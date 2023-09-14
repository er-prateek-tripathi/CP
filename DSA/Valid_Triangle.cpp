// A traingle in which length of all the sides are given can be proved to be a valid traingle,
// if the sum of length of its two sides is greater than he length of the third side.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the length of the three sides: "<<endl;
    cin>>a>>b>>c;
    if (a+b>c || b+c>a || c+a>b)
        cout<<endl<<"Triangle is valid.";
    else cout<<endl<<"Triangle is invalid.";

    return 0;
}