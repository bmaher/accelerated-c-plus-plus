//
//  main.cpp
//  accelerated-c-plus-plus
//
//  Created by Brian Maher on 08/05/2014.
//  Copyright (c) 2014 Personal. All rights reserved.
//

#include <iostream>
#include <string>

int main()
{
    // ask for the person's name
    std::cout << "Please enter your first name: ";
    
    // read the name
    std::string name;
    std::cin >> name;

    // build the greeting
    const std::string greeting = "Hello, " + name + "!";
    
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";
    
    const std::string first(second.size(), '*');
    
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    return 0;
}

