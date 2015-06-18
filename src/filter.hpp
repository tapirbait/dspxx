#ifndef _DSPXX_FILTER_HPP_
#define _DSPXX_FILTER_HPP_

#include <dspxx.h>

template<typename float_type>
class filter
{
public:
    virtual float_type processSample(float_type sample) = 0;

    virtual size_t processSamples(size_t n_input_samples,
                                  float_type * input_buffer,
                                  size_t output_buffer_size,
                                  float_type * output_buffer)
    {
        size_t k;
        for (k = 0; k < n_input_samples; k++)
        {
            output_buffer[k] = processSample(input_buffer[k]);
        }
        return k;
    }
    // TODO: provide function to unwrap std::vectors of float_type and pass to above virtual
};

#endif
