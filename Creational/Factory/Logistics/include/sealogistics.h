#ifndef SEA_LOGISTICS_H
#define SEA_LOGISTICS_H

#include "logistics.h"

class SeaLogistics : public Logistics {
public:
    SeaLogistics(TransportOptions transportOption = TransportOptions::Sea)
        : Logistics(transportOption) {}
    ~SeaLogistics() = default;

    std::unique_ptr<Transport> createTransport() override;
};

#endif
