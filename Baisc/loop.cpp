#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

    list<int> numbers_list({1, 10, 100, 1000});
    
    for (int val : numbers_list)             // Loop while numbers_list don't get in the end
        cout << val << "  ";                 // Print function
    cout << endl;

    list<string> vocals_list({"a", "e", "i", "o", "u"});

    for (string val : vocals_list)           // Loop while vocals_list don't get in the end
        cout << val << "  ";                 // Print function
    cout << endl;

    list<string> spells({"Lumos","Alohomora","Wingardium Leviosa","Crucio","Expecto Patronum"});

    for (string spell : spells)              // Loop while spells don't get in the end
        cout << spell << " ";                // Print function
    cout << endl;   

    int counter = 0;                         // Loop counter

    while (counter < 5)                      // Loop while counter is less than 5
    {
        counter++;                           // Increment the counter
        if (counter == 3)                    // Jump this counter when is eqaul to 3
            continue;

        cout << counter << endl;             // Print function
    }

    return 0;
}
