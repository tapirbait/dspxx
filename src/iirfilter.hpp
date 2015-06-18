#ifndef _DSPXX_IIRFILTER_HPP_
#define _DSPXX_IIRFILTER_HPP_

#include <dspxx.h>

template<typename float_type>
class iirfilter {
public:
	void processSamples(size_t n_samples, float_type * buffer) {
		
	};
	float_type * state;
	float_type * nominator_coefficients;
	float_type * denominator_co;
};

#endif
