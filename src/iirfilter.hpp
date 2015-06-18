#ifndef _DSPXX_IIRFILTER_HPP_
#define _DSPXX_IIRFILTER_HPP_

#include <dspxx.h>

template<typename float_type>
class iirfilter: filter<float_type>
{
public:
    float_type * state;
    float_type * nominator_coefficients;
    float_type * denominator_co;
};

#endif
