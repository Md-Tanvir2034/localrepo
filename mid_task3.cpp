#include <iostream>
using namespace std;

int main() {
    int years[5]; 
    int leapcount = 0; 

    
    cout << "Enter 5 years: ";


    for (int i = 0; i < 5; i++) {
        cin >> years[i];
        
    }

   
    for (int i = 0; i < 5; i++) {
        if ((years[i] % 4 == 0 && years[i] % 100 != 0)  || (years[i] % 400 == 0)) {
           
            leapcount++; 
        }
    }

    cout << "There are " << leapcount << " leap years present in the array." << endl;


    return 0;


}
