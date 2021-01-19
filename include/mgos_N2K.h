#ifndef __LIB_N2K__
#define __LIB_N2K__

#include "mgos.h"



#include "NMEA2000_CAN.h"  // This will automatically choose right CAN library and create suitable NMEA2000 object
#include "N2kMsg.h"
#include "NMEA2000.h"
#include "N2kMessages.h"




#ifdef __cplusplus
extern "C" {
#endif

bool mgos_N2K_B_init(void);

#ifdef __cplusplus
}
#endif

#endif // __LIB_N2K__
