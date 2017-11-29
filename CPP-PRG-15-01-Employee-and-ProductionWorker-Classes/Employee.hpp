//
//  Employee.hpp
//  CPP-PRG-15-01-Employee-and-ProductionWorker-Classes
//
//  Created by Keith Smith on 11/20/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>

class Employee
{
public:
    Employee();
    
    void setEmployeeName(std::string);
    void setEmployeeNumber(int);
    void setHireDate(std::string);
    
    std::string getEmployeeName() const;
    int getEmployeeNumber() const;
    std::string getHireDate() const;
private:
    std::string strEmployeeName;
    int intEmployeeNumber;
    std::string strHireDate;
};

#endif /* Employee_hpp */
