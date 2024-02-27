// Creating a pyramid using a sequence of chars given by the user
#include <iostream>
#include <string>
using namespace std;
int main(){
    string letters{};
    cout << "Enter a sequence of letters so I can create a Pyramid from it: ";
    getline(cin, letters);
    int num_chars(letters.length());
    int num_spaces = num_chars;
    int position{0};
    for (char c: letters){
        for (int w = 0; w < num_spaces; w++){
            cout << " ";
        }
        num_spaces--; 
        for(int j = 0; j < position; j++){
            cout << letters.at(j);
        }
        cout << c;
        for (int k = position - 1; k >= 0; k--){
            cout << letters.at(k);
        }
        cout << endl;
        position++;
    }
    return 0;
}