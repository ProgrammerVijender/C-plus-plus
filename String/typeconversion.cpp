#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare the string containing the number
    string expression = "102";
    int i = 0, n = 3;
    int num = 0; // Initialize num to 0

    // Loop through each character in the string and convert to an integer
    while (i < n && isdigit(expression[i])) {
        num = num * 10 + (expression[i] - '0');
        cout << num << endl;
        i++;
    }
    
    // Output the final result
    cout << "Final number: " << num << endl;
    
    return 0;
}
