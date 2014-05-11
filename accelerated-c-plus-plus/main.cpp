//
//  main.cpp
//  accelerated-c-plus-plus
//
//  Created by Brian Maher on 08/05/2014.
//  Copyright (c) 2014 Personal. All rights reserved.
//

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::sort;    using std::vector;
using std::cin;     using std::setprecision;
using std::cout;    using std::string;
using std::endl;    using std::streamsize;

int main()
{
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
    
    vector<double> homework;
    double x;
    // invariant: homework contains all the homework grades read so far
    while (cin >> x) {
        homework.push_back(x);
    }
    
    // check that the student entered some homework grades
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size == 0) {
        cout << endl << "You must enter your grades. Please try again." << endl;
        return 1;
    }
    
    // sort the grades
    sort(homework.begin(), homework.end());
    
    // compute the median homework grade
    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];
    
    // set precision to 3, return previous value
    streamsize prec = cout.precision(3);
    
    // write the result
    cout << "Your final grade is " << 0.2 * midterm + 0.4 * final + 0.4 * median << endl;
    
    // reset precision to original value
    cout.precision(prec);
    
    return 0;
}