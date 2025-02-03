#include <iostream>
#include <string>
using namespace std;

int main() {

    int word_size;
    cout << "Enter the size of the word: ";
    cin >> word_size;

    
    cout << "Enter the word: " ;
    char arr[word_size+1];
    cin >> arr;

int vowel_count = 0 ;

    cout << "Present vowels = " ;
    for (int i = 0;  i < word_size; i++) {
        char ch = arr[i]; 
    
    
    if (ch == 'a' || ch == 'e'  || ch == 'i' || ch == 'o' || ch == 'u'  ||
            ch == 'A' ||  ch == 'E' || ch == 'I'  || ch == 'O' || ch == 'U') {
           if (vowel_count > 0) {
                cout << " , "; 
            }
            cout << ch; 
            vowel_count++; 
        }
    }
  return 0;
    }

    
  

