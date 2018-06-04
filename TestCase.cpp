//
//  TestCase.cpp
//  TestCase
//
//  Created by SAMUEL and JOHANN on 04/06/2018.
//  Copyright © 2018 SAMUEL and JOHANN. All rights reserved.
//

#include "TestCase.hpp"
#include <iostream>
#include <sstream>
#include <vector>
#include <functional>
#include <typeinfo>


using namespace std;

TestCase::TestCase(string name,ostream &error){
    this->name = name;
    this->numFail = 0;
    this->numPass = 0;
}


template <typename T> TestCase* TestCase::check_equal(T a, T b){
    // maybe use here : if( typeid(a).name() == "int" ) or typeid(a).name() == "MyStruct"
    try{
        a == b;
        numPass++;
    }catch(...){
        
        numFail++;
        cerr << name <<": Failure in test #"<<numPass+numFail<<": Function should return "<< a << " but returned "<< b <<"!" << endl ;
    }
        
    
    return this ;
}

void TestCase::print(){
    
}









    
