/**
 * CPU subclass header
 *
 */

#ifndef CPU_H_
#define CPU_H_

#include "Player.h"
#include "RandomSelection.h"
#include "SmartSelection.h"

class CPU : public Player {
public:

    // enum defines modes of selection
    typedef enum {
        RANDOM = 0,
        SMART = 1
    } cpuMode_t;

    CPU(cpuMode_t mode);
    ~CPU() override;

};

#endif /* CPU_H_ */
