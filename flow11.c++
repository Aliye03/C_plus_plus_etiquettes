//using nested loop to display a histogram
#include <iostream>
#include <vector>
using namespace std;
int  main() {
    vector <int> items {};
    int number_of_data {};
    int data_item {};
    cout << "Enter the number of items: ";
    cin >> number_of_data;
    for (int i {1}; i <= number_of_data; i++) {
        cout << "Enter data number " << i << ": ";
        cin >> data_item;
        items.push_back(data_item);
    }
    cout << endl;

    // Display the histogram
    cout << "Display the histogram\n";
    for (int val : items) {
        for (int i {}; i < val; i++)
        if (i % 5 == 0)
            cout << "*" ;
        else
            cout << "-";
        cout << endl;
    }
 return 0;   
}