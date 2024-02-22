#include "../include/roadlogistics.h"

std::unique_ptr<Transport> RoadLogistics::createTransport() {
    return std::make_unique<Truck>();
}
