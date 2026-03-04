#ifndef __BLERX_HPP__
#define __BLERX_HPP__

extern "C"{
    #include "cmsis_os2.h"
    #include "usart.h"
}

#include "IRx.hpp"
#include "DataConfig.hpp"
#include "IDataProcessor.hpp"

class BleRx : public IRx{
    private:
        UART_HandleTypeDef *huart;
        osMessageQueueId_t *qhandle;
        uint8_t rx_buf[RX_BUF_SIZE];
        uint8_t tmp[RX_BUF_SIZE];
        uint16_t rx_old_pos;
        IDataProcessor *processor;

        uint16_t uart_dma_read(uint16_t *);
    public:
        void Init(void *argument) override;
        void GetFromRx(void *arguement) override;
};



#endif