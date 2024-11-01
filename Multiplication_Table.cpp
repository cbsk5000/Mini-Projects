// A simple multiplication table using a nested loop

#include <iostream>
using namespace std;

int main()
{
    cout << "M U L T I P L I C A T I O N   T A B L E" << endl << endl;
    int number, end_value, limit;
    cout << "Number starts with: ";
    cin >> number;
    cout << "Number ends with: ";
    cin >> end_value;
    cout << "Limit: ";
    cin >> limit;
    
    
    while (number <= end_value){
        int count = 1;
        
        while (count <= limit){
            cout << (number*count) << "  ";
            count++;
        }
        
        number++;
        cout << endl;
        
    }
    

    return 0;
}