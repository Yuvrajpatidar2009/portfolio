#include <iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the id of employee is "<< id<< " and this is employee no. " << count <<endl;;
        }
        static void getCount(void){
            cout<<"The value of count is "<<count <<endl;
        }
};

// count is static variable here, it's value is by default 0
int employee:: count;
int main(){
    employee harry,rohan;
    // harry.id = 1 ; cannot do this as id is private
    harry.setData();
    harry.getData();
    employee::getCount();

    rohan.setData();
    rohan.getData();
    employee::getCount();

    employee fb[2];
    for (int i=0;i<2;i++){
        fb[i].setData();
        fb[i].getData();
    }
    return 0;
}