#include<iostream>
using namespace std;
void fun1();
int main(){
    for (int i = 0; i <10; i++){
        if (i == 5){
            break;
        }
        cout<<i<<endl;
    }

    cout<<"---------------------"<<endl;
    fun1();

    for (int j = 0; j <10; j++){
        if (j==5){
            continue;
        }
        cout<<j<<endl;
    }
    return 0;

}

void fun1(){
    cout<<"now move to the next. "<<endl;
}