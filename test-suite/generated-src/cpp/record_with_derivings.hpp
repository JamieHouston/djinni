// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include <chrono>
#include <cstdint>
#include <string>
#include <utility>

namespace testsuite {

struct RecordWithDerivings final {
    int8_t eight;
    int16_t sixteen;
    int32_t thirtytwo;
    int64_t sixtyfour;
    float fthirtytwo;
    double fsixtyfour;
    std::chrono::system_clock::time_point d;
    std::string s;

    friend bool operator==(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);
    friend bool operator!=(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);

    friend bool operator<(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);
    friend bool operator>(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);

    friend bool operator<=(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);
    friend bool operator>=(const RecordWithDerivings& lhs, const RecordWithDerivings& rhs);

    RecordWithDerivings(int8_t eight_,
                        int16_t sixteen_,
                        int32_t thirtytwo_,
                        int64_t sixtyfour_,
                        float fthirtytwo_,
                        double fsixtyfour_,
                        std::chrono::system_clock::time_point d_,
                        std::string s_)
    : eight(std::move(eight_))
    , sixteen(std::move(sixteen_))
    , thirtytwo(std::move(thirtytwo_))
    , sixtyfour(std::move(sixtyfour_))
    , fthirtytwo(std::move(fthirtytwo_))
    , fsixtyfour(std::move(fsixtyfour_))
    , d(std::move(d_))
    , s(std::move(s_))
    {}
    RecordWithDerivings() {}
};

}  // namespace testsuite
