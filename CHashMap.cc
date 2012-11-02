/*************************************************/
/* START of CHashMap */
#include <CHashMap.h>

x10aux::RuntimeType CHashMap<void, void>::rtt;
x10_int CHashMap<void, void>::FMGL(DEFAULT_NUM_BUCKETS) = ((x10_int)128);
x10_int CHashMap<void, void>::FMGL(MAX_SEGMENTS) = ((x10_int)1000000);
x10_int CHashMap<void, void>::FMGL(RESIZE_FACTOR) = ((x10_int)2);
x10_int CHashMap<void, void>::FMGL(NEIGHBORHOOD_SIZE) = ((x10_int)4);
x10_boolean CHashMap<void, void>::FMGL(isDebugging) = false;

/* END of CHashMap */
/*************************************************/
/*************************************************/
/* START of CEntry */
#include <CEntry.h>

x10aux::RuntimeType CEntry<void, void>::rtt;

/* END of CEntry */
/*************************************************/
