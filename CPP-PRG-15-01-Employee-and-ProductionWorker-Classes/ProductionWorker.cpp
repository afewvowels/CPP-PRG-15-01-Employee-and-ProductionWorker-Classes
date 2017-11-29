//
//  ProductionWorker.cpp
//  CPP-PRG-15-01-Employee-and-ProductionWorker-Classes
//
//  Created by Keith Smith on 11/20/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "ProductionWorker.hpp"

//ProductionWorker::ProductionWorker() : Employee()
//{
//    
//}

void ProductionWorker::setShift(int shift)
{
    intShift = shift;
}
void ProductionWorker::setPayrate(double payRate)
{
    dblHourlyPayRate = payRate;
}

int ProductionWorker::getShift() const
{
    return intShift;
}

double ProductionWorker::getPayrate() const
{
    return dblHourlyPayRate;
}
