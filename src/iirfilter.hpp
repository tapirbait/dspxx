#ifndef _DSPXX_IIRFILTER_HPP_
#define _DSPXX_IIRFILTER_HPP_

#include <dspxx.h>

template<typename float_type>
class iirfilter: public filter<float_type>
{
public:
    float_type processSample(float_type sample)
    {
        return 0.0;
    }
    float_type * state;
    float_type * nominator_coefficients;
    float_type * denominator_co;
};

#endif
