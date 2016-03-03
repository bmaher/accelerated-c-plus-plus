#ifndef __accelerated_c_plus_plus__grade__
#define __accelerated_c_plus_plus__grade__

//
//  grade.h
//  accelerated-c-plus-plus
//
//  Created by Brian Maher on 01/08/2014.
//  Copyright (c) 2014 Personal. All rights reserved.
//

#include <vector>

#include "Student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

#endif /* defined(__accelerated_c_plus_plus__grade__) */
