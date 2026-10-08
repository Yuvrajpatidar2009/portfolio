#include<iostream>
using namespace std;
int main(){

    // for loop
    for (int i = 0; i < 11; i++){
        cout<<i<<endl;
    }

    // while loop
    int j = 10;
    while (j <= 20){
        cout<<j<<endl;
        j++;
    }

    // do while loop
    int k = 30;
    do{
        cout<<k<<endl;
        k++;
    }while(k <= 10);
 
    /* difference between while and do while loop is
 that in while loop the condition is checked first
  and then the statement is executed but in do 
  while loop the statement is executed first and
   then the condition is checked.*/

   char name;
   for(name='a'; name<='z'; name++){
       cout<<name<<" ";}
    return 0;
}

