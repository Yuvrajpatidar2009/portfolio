/* structures in c++
1. sequence structures : entry - action 1 - action 2 - exit
2. selection structures : entry - condition - "if true - action 1 - exit" or " if false - action 2 - exit"
3. repetition structures : entry - condition or loop - "while true - action 1 - exit" or " for each element - action 2 - exit"*/

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    
    // sequence structure

    if (age <= 12 && age > 0)
        cout<<"You are a child. hence you are not allowed to come to party."<<endl;
    // if there is only one statement after if,else if or else, then we can skip the curly braces
    
    else if ((age > 12 ) && (age <= 18)){
        cout<<"You are a teenager. hence you will get a kid pass to come to party."<<endl;
    }
    else if (age > 18){
        cout<<"You are an adult. hence you will get a normal person pass to come to party."<<endl;
    }
    else{
        cout<<"please enter valid age."<<endl;
    }

    // 2. selection structure

    switch(age){
        case 12:
            cout<<"You are just one year away from being a teenager. "<<endl;
            break;
        case 18:
            cout<<"You are just one year away from being an adult."<<endl;
            break;
        
        default:
        cout<<" ";
    }
    return 0;
}