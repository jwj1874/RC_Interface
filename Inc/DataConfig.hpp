#ifndef __DATACONFIG_HPP__
#define __DATACONFIG_HPP__

#include <cstdint>

extern "C"{
    #include "usart.h"
}

#define Packet_len 17
#define SOF 0xAA
#define RX_BUF_SIZE 128

#define driving 0xFF
#define arm 0x00

typedef struct{
    uint8_t mode_data;
    uint8_t moter_x;
    uint8_t moter_y;
    uint8_t gripper;
    uint32_t servo_top;
    uint32_t servo_mid;
    uint32_t servo_bot;
}Data;

typedef struct{
    void *huart;
    void *qhandle;
    void *servo_q;
    void *moter_q;
}Init_type;

#endif