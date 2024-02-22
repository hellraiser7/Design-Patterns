#ifndef SHIP_H
#define SHIP_H

#include "transport.h"

class Ship : public Transport
{
public:
    void deliver() const override;
};
#endif