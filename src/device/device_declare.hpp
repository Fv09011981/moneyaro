#pragma once


//#define DEBUGLEDGER
//#define IODUMMYCRYPT 1
//#define IONOCRYPT 1

namespace hw {
    class Device;

    Device& get_device(std::string device_descriptor);
}

