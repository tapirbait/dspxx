
#include <iostream>

#include <dspxx.h>

typedef float float_type;

int main(int argc, char**argv)
{
    std::cout << "=== test main ===" << std::endl;

    size_t n = 10;
    size_t n_out = n;
    float_type input_samples[n];
    float_type output_samples[n];
    for (size_t k = 0; k < n; k++)
    {
        input_samples[k] = exp(-k) * (1 - 2*(k%2));
    }

    iirfilter<float_type> f;
    size_t k_out = f.processSamples(n, input_samples, n_out, output_samples);

    std::cout << "processed " << k_out << " samples" << std::endl;
    for (size_t k = 0; k < k_out; k++)
    {
        std::cout << "output_sample[" << k << "] == " << output_samples[k] << std::endl;
    }

    std::cout << "=== done ===" << std::endl;
    return 0;
}


