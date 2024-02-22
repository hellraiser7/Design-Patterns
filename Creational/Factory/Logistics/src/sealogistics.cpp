#include "../include/sealogistics.h"

std::unique_ptr<Transport> SeaLogistics::createTransport() {
    return std::make_unique<Ship>();
}
