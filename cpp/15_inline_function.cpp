#include<iostream>
using namespace std;

// faltu hai

inline int max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    cout<<max(10, 20)<<endl;
    cout<<max(17, 20)<<endl;
    cout<<max(10, 20)<<endl;
    cout<<max(1, 20)<<endl;
    cout<<max(13, 20)<<endl;
    cout<<max(10, 30)<<endl;
    cout<<max(10, 15)<<endl;
    cout<<max(40, 20)<<endl;
    cout<<max(100, 20)<<endl;
    cout<<max(12, 20)<<endl;
    cout<<max(10, 200)<<endl;
    return 0;
}

/*do not use inline function with static
or when function is to long*/