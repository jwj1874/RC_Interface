#include "BleRx.hpp"
#include "PacketCodec.hpp"

void BleRx::Init(void *argument){
    Init_type *handle = static_cast<Init_type*>(argument);
    huart = handle->huart;
    qhandle = handle->qhandle;
    rx_old_pos = 0;
    if (processor == nullptr){
        processor = new (std::nothrow) PacketCodec;
        configASSERT(processor != nullptr);
     }
}

void BleRx::GetFromRx(void *argument){
    
}