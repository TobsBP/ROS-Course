#include <iostream>
using namespace std;

string g_sentence;  //global variable

void myfunction() {
    g_sentence = "Global variable";    
}

int main() {
    
    myfunction();
    cout << g_sentence << endl;
    
    return 0;
} 