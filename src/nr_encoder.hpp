#pragma once

#include <vector>
#include <cstdint>

struct NRMessage {
    // TODO: Add fields relevant to your NR message structure
};

class NREncoder {
public:
    static std::vector<uint8_t> encodeMessage(const NRMessage& message);
};
