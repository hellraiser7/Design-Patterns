#ifndef ROAD_LOGISTICS_H
#define ROAD_LOGISTICS_H

#include "logistics.h"

class RoadLogistics : public Logistics {
public:
    RoadLogistics(TransportOptions transportOption = TransportOptions::Land)
        : Logistics(transportOption) {}
    ~RoadLogistics() = default;

    std::unique_ptr<Transport> createTransport() override;
};

#endif
