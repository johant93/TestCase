//
//  TestCase.hpp
//  TestCase
//
//  Created by SAMUEL and JOHANN on 04/06/2018.
//  Copyright © 2018 SAMUEL and JOHANN. All rights reserved.
//

#ifndef TestCase_hpp
#define TestCase_hpp
#include <sstream>
#include <stdio.h>

using namespace std;
class TestCase {
    
    public:
    
    //Constructor
    
    TestCase(string name,ostream &error);
    
    
    //methods
    
    template <typename T>  TestCase* check_equal(T a, T b);
    void print();

    
    private:
    
    int numPass, numFail;
    string name;
    
};


#endif /* TestCase_hpp */
