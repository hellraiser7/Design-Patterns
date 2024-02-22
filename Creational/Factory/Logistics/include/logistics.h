#ifndef LOGISTICS_H
#define LOGISTICS_H

/*
Logistics : Factory Class to which the object construction is delegated for products
*/

#include "transportoptions.h"
#include "truck.h"
#include "ship.h"

#include <string>
#include <memory> 

class Logistics
{
public:
    Logistics (TransportOptions transportOption);
    ~Logistics() = default;
    void planDelivery();
private:
    virtual std::unique_ptr<Transport> createTransport();
    TransportOptions _transportOption{TransportOptions::Land};
};
#endif