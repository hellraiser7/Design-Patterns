#include "../include/logistics.h"

int main() {
    Logistics* logisticsFactory = new Logistics(TransportOptions::Sea);
    logisticsFactory->planDelivery();
    return 0;
}
