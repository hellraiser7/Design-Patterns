#ifndef TRUCK_H
#define TRUCK_H

#include "transport.h"

class Truck : public Transport
{
public:
    void deliver() const override;
};
#endif