//
//  ProductionWorker.hpp
//  CPP-PRG-15-01-Employee-and-ProductionWorker-Classes
//
//  Created by Keith Smith on 11/20/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef ProductionWorker_hpp
#define ProductionWorker_hpp
#include "Employee.hpp";

#include <stdio.h>

class ProductionWorker : public Employee
{
public:
    ProductionWorker() : Employee()
    {
        
    }
    
    void setShift(int);
    void setPayrate(double);
    
    int getShift() const;
    double getPayrate() const;
private:
    int intShift;
    double dblHourlyPayRate;
};

#endif /* ProductionWorker_hpp */
