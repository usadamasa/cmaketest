#include <iostream>

#include "version.h"
#include "MathFunctions/Sqrt.h"

int main(int argc, char *argv[]) {
    std::cerr << "version :" << sandbox::version::GetVersion() << std::endl;

    if (argc < 2) {
        std::cerr << "Usage:" << argv[0] << " number" << std::endl;
        return 1;
    }

    double input_value = std::atof(argv[1]);
    const sandbox::Sqrt s(input_value);
    const auto output = s.GetSqrt();
    std::cout << "The square root of " << input_value << " is " << output << "." << std::endl;

    return 0;
}