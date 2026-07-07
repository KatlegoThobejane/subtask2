#include <iostream>
#include <string>

using namespace std;

string toMorse(char c) {
    switch (toupper(c)) {
    case 'A': return ".-";
    case 'B': return "-...";
    case 'C': return "-.-.";
    case 'D': return "-..";
    case 'E': return ".";
    case 'F': return "..-.";
    case 'G': return "--.";
    case 'H': return "....";
    case 'I': return "..";
    case 'J': return ".---";
    case 'K': return "-.-";
    case 'L': return ".-..";
    case 'M': return "--";
    case 'N': return "-.";
    case 'O': return "---";
    case 'P': return ".--.";
    case 'Q': return "--.-";
    case 'R': return ".-.";
    case 'S': return "...";
    case 'T': return "-";
    case 'U': return "..-";
    case 'V': return "...-";
    case 'W': return ".--";
    case 'X': return "-..-";
    case 'Y': return "-.--";
    case 'Z': return "--..";
    case ' ': return "/";
    default: return "";
    }
}

int main() {
    string message;
    cout << "Enter a short message in English (A - Z character only): ";
    cin >> message;

    string MorseCode;
    for (char c : message) {
        string code = toMorse(c);
        cout << c << ": " << code <<
endl;
        MorseCode += code + "  ";
    }
    
    cout << "\nFull Morse code
   Message:\n";
     for (char c : MorseCode) {
          if (c == '/')
               cout << "/";
             else
                cout << c;
    }
    
    cout << endl;
    
    return 0;
    
 }


