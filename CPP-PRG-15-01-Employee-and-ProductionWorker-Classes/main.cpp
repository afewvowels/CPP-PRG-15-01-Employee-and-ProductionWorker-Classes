//
//  main.cpp
//  CPP-PRG-15-01-Employee-and-ProductionWorker-Classes
//
//  Created by Keith Smith on 11/20/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Design a class named Employee. The class should keep the following information:
//
//  * Employee name
//  * Employee number
//  * Hire date
//
//  Write one or more constructors, and the appropriate accessor and mutator functions,
//  for the class.
//
//  Next write a class named ProductionWorker that is derived from the Employee class.
//  The ProductionWorker class should have member variables to hold the following
//  information:
//
//  * Shift (an integer)
//  * Hourly pay rate (a double)
//
//  The workday is divided into two shifts: day and night. The shift variable will hold an
//  integer value representing the shift that the employee works. The day shift is shift 1,
//  and the night shift is shift 2. Write one or more constructors, and the appropriate
//  accessor and mutator functions, for the class. Demonstrate the classes by writing a program
//  that uses a ProductionWorker object.

#include <iostream>
#include "ProductionWorker.hpp"
#include "Employee.hpp"

int main()
{
    ProductionWorker workerBob;
    
    workerBob.setPayrate(10.0);
    workerBob.setShift(1);
    
    workerBob.setEmployeeName("Bob");
    workerBob.setHireDate("01/01/1960");
    workerBob.setEmployeeNumber(123456);
    
    return 0;
}
