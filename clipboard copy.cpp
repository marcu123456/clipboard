// This terrible code was brought to you by marcu123456
// This is under GPL V3
// total_hours_wasted = 4;

#include <iostream> // cout, cin etc.
#include <stdio.h> // I prefer printf()
#include <cstring> // Used for handling strings and not char arrays
#include <fstream> // Used for adding the history to a file

using namespace std;


int main() {
    cout << "\x1B[2J\x1B[H"; // Terminal codes that clear the terminal.
    printf("\e[1mClipboard\e[0m\n");
    ofstream hist;
    
    while (true) {
        hist.open("clipboardHistory.txt", ios::app);
        
        string input;
        std::cin >> input;

        hist << input << "\n";
        hist.close();

        input = "";
    }
    
}

