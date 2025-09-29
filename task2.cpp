#include <iostream>

using namespace std;

string task2(const string& input) {
    string output;

    for (const char c : input) {
        switch(c) {
            case '&': output += "&amp;"; break;
            case '<': output += "&lt;"; break;
            case '>': output += "&gt;"; break;
            default: output += c;
        }
    }

    return output;
}

int main() {
    cout << task2("Hello & <World>!") << "\n";
    return 0;
}