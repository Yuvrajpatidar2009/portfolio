#include<iostream>
using namespace std;

void swapPointer(int* a, int* b){
        int c = *a;
        *a = *b;
        *b = c;
    }

void swapReference(int &a, int &b){
        int c = a;
        a = b;
        b = c;
    }

int main(){
    int x = 10;
    int y = 20;
    cout<<"The value of x before swapping is: "<<x<<endl;
    cout<<"The value of y before swapping is: "<<y<<endl;
    swapReference(x, y);
    cout<<"The value of x after swapping is: "<<x<<endl;
    cout<<"The value of y after swapping is: "<<y<<endl;

    cout<<"---------------------"<<endl;

    cout<<"The value of x before swapping is: "<<x<<endl;
    cout<<"The value of y before swapping is: "<<y<<endl;
    swapPointer(&x, &y);
    cout<<"The value of x after swapping is: "<<x<<endl;
    cout<<"The value of y after swapping is: "<<y<<endl;
    return 0;
}
