#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    list<int> numbers_list({1, 10, 100, 1000});
    list<string> vocals_list({"a", "e", "i", "o", "u"});

    for (int val : numbers_list)             // Loop
        cout << val << "  ";                 // Print function
    cout << endl;

    for (string val : vocals_list)           // Loop
        cout << val << "  ";                 // Print function
    cout << endl;

    return 0;
}
