#ifndef KF_H
#define KF_H

#include <string>

class Caffetiere
{
private:
    std::string couleur;
    int volumeeau;

public:
    Caffetiere();
    ~Caffetiere();

    void FaireCafe();
};

#endif