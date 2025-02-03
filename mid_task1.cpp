#include<iostream>

using namespace std;

int main(){

double class_held ,class_atttend ;

cout <<"Enter number of classes held: " ;
cin>> class_held;
cout << "Enter number of classes that were attended: "  ;
cin>>  class_atttend ;

double percentage = (class_atttend / class_held) * 100;

cout<<"Present percentage = " << percentage << "%" <<endl ;

if( percentage < 80){

    cout<<"So, the student is not allowed to sit in the exam " ;

}

else{ cout<<"So, the student is allowed to sit in the exam" ;
}

return 0;


}