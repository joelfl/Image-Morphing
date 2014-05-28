#ifndef CHRONOS_H
#define CHRONOS_H

namespace nehab
{

class chronos {
public:
    chronos();
    void reset(void);
    double elapsed(void);
    double time(void);
private:
    double m_reset;
};

}

#endif // CHRONOS_H
