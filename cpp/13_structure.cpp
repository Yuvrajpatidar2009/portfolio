#include<iostream>
using namespace std;

struct student{
    int rollno;
    char name[20];
    float marks;
};


/* or 
typedef struct student
{
....
...
} s;  
 now we can use s in place of student*/

union money{
    int rupees;
    float dollars;
};
/* union is better for saving memory*/


int main(){
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    meal n1 = dinner;
    cout<<n1<<endl;

    struct student rahul;
    struct student rohan;
    rahul.rollno = 1;
    rahul.marks = 90.5;
    struct student rockey = {2, "Rockey singh", 23.3};
    cout<<"The roll no of rahul is: "<<rahul.rollno<<endl;
    cout<<"The marks of rockey is: "<<rockey.marks<<endl;

    union money m1;
    m1.rupees = 100;
    m1.dollars = 200.5;
    cout<<"The value of rupees is: "<<m1.rupees<<endl;
    cout<<"The value of dollars is: "<<m1.dollars<<endl;
    return 0;
}

