#include "../include/roadlogistics.h"
#include "../include/sealogistics.h"

#include <iostream>

Logistics::Logistics(TransportOptions transportOption) : _transportOption(transportOption) {}

void Logistics::planDelivery() 
{
    std::unique_ptr<Transport> transport = createTransport();
    if (transport) {
        transport->deliver();
    } 
    else {
        std::cout << "Error: Invalid transport option!" << std::endl;
    }
}

std::unique_ptr<Transport> Logistics::createTransport() 
{
    switch (_transportOption) {
        case TransportOptions::Land: {
            return (std::make_unique<RoadLogistics>())->createTransport();
        }
        case TransportOptions::Sea: {
            return (std::make_unique<RoadLogistics>())->createTransport();
        }
        default: {
            return nullptr;
        }
    }
    return nullptr;
}