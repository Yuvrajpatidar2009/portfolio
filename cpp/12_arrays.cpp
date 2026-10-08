#include<iostream>
using namespace std;
int main(){
    int marks[] = {45, 67, 89, 90, 78};

    int attendence[4];
    attendence[0] = 90;
    attendence[1] = 85;
    attendence[2] = 95;
    attendence[3] = 80;

    cout<<"The marks of student 1 is: "<<marks[0]<<endl;
    cout<<"The attendence of student 4 is: "<<attendence[3]<<endl;

    for (int i = 0; i < 5; i++){
        cout<<"The marks of student "<<i+1<<" is: "<<marks[i]<<endl;
    }
    marks[2] = 98;
    cout<<"The updated marks of student 3 is: "<<marks[2]<<endl;


    int*p = attendence;
    cout<<"The value of attendence[0] is: "<<*p<<endl;
    cout<<"The value of attendence[1] is: "<<*(p+1)<<endl;
    return 0;
}