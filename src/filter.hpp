#ifndef _DSPXX_FILTER_HPP_
#define _DSPXX_FILTER_HPP_

#include <dspxx.h>

template<typename float_type>
class filter {
public:
	virtual float_type processSample() {
	}
	virtual size_t processSamples(size_t n_input_samples, 
								float_type * input_buffer, 
								float_type * output_buffer) = 0;
	// TODO: provide function to unwrap std::vectors of float_type and pass to above virtual
};

#endif
