#include <iostream>

#include "DataLogger.hpp"

static const DataLogger::DataFields datafields = {
        {"uint8_data", DataLogger::DataType::UINT8},
        {"int32_data", DataLogger::DataType::INT32},
        {"uint32_data", DataLogger::DataType::UINT32},
        {"float32_data", DataLogger::DataType::FLOAT32},
        {"float64_data", DataLogger::DataType::FLOAT64},
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    DataLogger log("test.log", datafields);

    // bind references
    float& myfloat = log.get_float32("float32_data");
    std::cout << "myfloat default value: " << myfloat << std::endl;
    log.publish();

    myfloat = 123.456;
    log.publish();
    std::cout << "myfloat new value: " << myfloat << std::endl;

    return 0;
}
