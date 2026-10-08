#include<iostream>
using namespace std;

int volume(int a){
    return a*a*a;
}

int volume(double r, double h){
    return(3.14*r*r*h);
}

int volume(int l, float b, double h){
    return(l*b*h);
}

int main(){
    cout<<"The volume of cube of edge 5 is: "<<volume(5)<<endl;
    cout<<"The volume of cylinnder of radius 2 and height 3 is: "<<volume(2,5)<<endl;
    cout<<"The volume of cuboid of length, breadth, height 2,5,3 respectively is: "<<volume(2,5,3);
    return 0;
}