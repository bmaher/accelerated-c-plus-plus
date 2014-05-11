//
//  main.cpp
//  accelerated-c-plus-plus
//
//  Created by Brian Maher on 08/05/2014.
//  Copyright (c) 2014 Personal. All rights reserved.
//

#include <iostream>
#include <string>

// defining which standard library names we use
using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
    // ask for the person's name
    cout << "Please enter your first name: ";
    
    // read the name
    string name;
    cin >> name;

    // build the greeting
    const string greeting = "Hello, " + name + "!";
    
    // ask for padding
    cout << "Please enter the amount of padding required: ";
    
    // read the padding
    int pad;
    cin >> pad;
    
    // number of rows and columns to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    
    // seperate output from input
    cout << endl;
    
    // invariant: we have written r rows so far;
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        
        // invariant: we have written c characters so far in the current row
        while (c != cols) {
    
            // write greeting?
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                
                // write border?
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        
        cout << endl;
    }
    
    return 0;
}

