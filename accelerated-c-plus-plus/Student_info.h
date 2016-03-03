#ifndef __accelerated_c_plus_plus__Student_info__
#define __accelerated_c_plus_plus__Student_info__

//
//  Student_info.h
//  accelerated-c-plus-plus
//
//  Created by Brian Maher on 01/08/2014.
//  Copyright (c) 2014 Personal. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif /* defined(__accelerated_c_plus_plus__Student_info__) */
