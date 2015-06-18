

#include <stdio.h>

#include <dspxx.h>

typedef float float_type;

int main(int argc, char**argv) {
	printf("=== test main ===\n");
	
	size_t n = 10;
	float_type samples[n];
	for (size_t k = 0; k < n; k++) {
		samples[k] = exp(-k) * (1 - 2*(k%2));
	}
	
	iirfilter<float_type> f();
	f.processSamples(n, samples);
	
	
	return 0;
}


