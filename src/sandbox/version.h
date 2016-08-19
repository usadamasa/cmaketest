#ifndef _SANDBOX_VERSION_
#define _SANDBOX_VERSION_

#include <string>

namespace sandbox {
namespace version {
static const auto major = 1 ;
static const auto minor = 0 ;

inline std::string GetVersion() {
    return std::to_string(major) + "." + std::to_string(minor);
}
} // namespace version
} // namespace sandbox

#endif // _SANDBOX_VERSION_
