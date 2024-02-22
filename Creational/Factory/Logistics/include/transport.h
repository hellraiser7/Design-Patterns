#ifndef TRANSPORT_H
#define TRANSPORT_H

class Transport
{
public:
    virtual void deliver() const = 0;
    virtual ~Transport() = default;
};
#endif