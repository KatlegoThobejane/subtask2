  string MorseCode;
    for (char c : message) {
        string code = toMorse(c);
        cout << c << ": " << code <<
endl;
        MorseCode += code + "  ";
    }
