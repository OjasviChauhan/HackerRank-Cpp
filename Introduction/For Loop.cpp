#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    string num[10] = {"Zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i>=1 && i<=9)
            cout<<num[i]<<"\n";
        else if(i%2 == 0)
            cout<<"even"<<"\n";
            else
            cout<<"odd"<<"\n";
    }
    return 0;
}
