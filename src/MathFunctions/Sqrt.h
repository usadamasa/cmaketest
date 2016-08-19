//
// Created by UCHIDA Masaru on 2016/08/19.
//

#ifndef SANDBOX_SQRT_H
#define SANDBOX_SQRT_H

#include <cstdint>

namespace sandbox {

class Sqrt {
  public:
    Sqrt(const uint32_t value);

    ~Sqrt();

    double GetSqrt() const;

  private:
    uint32_t v_;
};
}
#endif // SANDBOX_SQRT_H
