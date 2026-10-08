#include<iostream>
using namespace std;

int fib(int n){
    if(n<=2){
        return 1;
    }  // no need for else
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;


    int m = 0;
    cout<<"Enter the number of terms for fibonacci series : "<<endl;
    cin>>m;

    int t1 = 1, t2 = 1, nextTerm = 0;
    cout<<"Fibonacci Series: "<<endl;
    for(int i=1; i<=m; i++){
        if(i == 1){
            cout<<t1<<" ";
            continue;
        }
        if(i == 2){
            cout<<t2<<" ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout<<nextTerm<<" ";

    }
    return 0;
}