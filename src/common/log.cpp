#include <cstdio>
#include <string>
#include <vector>
#include "log.h"

std::string strAscii(const std::vector<unsigned char>& data) {
    return strAscii(data.begin(), data.end());
}

std::string strAscii(const unsigned char* data, size_t len) {
    std::string result;
    result.reserve(len);

    for (size_t i = 0; i < len; ++i) {
        result += (char)data[i];
    }

    return result;
}

std::string strHex(const std::vector<unsigned char>& data) {
    return strHex(data.begin(), data.end());
}

std::string strHex(const unsigned char* data, size_t len) {
    std::string result;
    result.reserve(len * 3);

    char buf[4];
    for (size_t i = 0; i < len; ++i) {
        sprintf(buf, " %02X", data[i]);
        result += buf;
    }

    return result;
}
