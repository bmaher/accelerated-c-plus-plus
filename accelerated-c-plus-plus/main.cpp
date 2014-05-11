//
//  main.cpp
//  accelerated-c-plus-plus
//
//  Created by Brian Maher on 08/05/2014.
//  Copyright (c) 2014 Personal. All rights reserved.
//

#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;     using std::setprecision;
using std::cout;    using std::string;
using std::endl;    using std::streamsize;

int main() {
    // ask for and read the student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    
    // ask for and read the midterm and final grades
    cout << "Please enter your midterm and final grades: ";
    double midterm, final;
    cin >> midterm >> final;
    
    // ask for the homework grades
    cout << "Enter all your homework grades, followed by end-of-file: ";
    
    // the number and sum of grades read so far
    int count = 0;
    double sum = 0;
    
    // a variable into which to read
    double x;
    
    // invariant: we have read count grades so far
    // and sum is the sum of the first count grades
    while (cin >> x) {
        ++count;
        sum += x;
    }
    
    // set precision to 3, return previous value
    streamsize prec = cout.precision(3);
    
    // write the result
    cout << "Your final grade is " << 0.2 * midterm + 0.4 * final + 0.4 * sum / count << endl;
    
    // reset precision to original value
    cout.precision(prec);
    
    return 0;
}