//
// Created by UCHIDA Masaru on 2016/08/19.
//

#include <cmath>

#include "Sqrt.h"

namespace sandbox {

/**
 * @brief
 * @param value
 */
Sqrt::Sqrt(const uint32_t value) : v_(value) {}

Sqrt::~Sqrt(){}

double Sqrt::GetSqrt() const {
    return std::sqrt(this->v_);
}

}
