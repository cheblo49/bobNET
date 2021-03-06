#ifndef RADIOTAP_H
#define RADIOTAP_H
#include <stdint.h>
#include <map>

#pragma pack(push,1)

struct radiotap
{
  uint8_t version;
  uint8_t pad;
  uint16_t len;
  uint32_t present; //4 byte
  uint32_t present1; //4 byte
  //uint8_t mac_timestamp[8];
  uint8_t flags; //
  uint8_t padding; // 00 padding
  //uint8_t data_rate; // r
  uint16_t channel; // channel frequency
  uint16_t channel_flags; // channel flags
  uint8_t antenna_signal; // antenna siignal
  uint8_t antenna; // antenna
  uint16_t rx_flags;// RX flags
  /*
  uint8_t version;
  uint8_t pad;
  uint16_t len;
  uint32_t present;
  uint32_t present1;
  uint32_t present2;
  uint32_t present3;
  uint8_t flag;
  uint8_t data_rate;
  uint16_t ch_frq;
  uint16_t ch_flag;
  uint8_t signal;
  uint8_t zero;
  uint16_t qual;
  uint16_t rx_flag;
  uint8_t ant_signal1;
  uint8_t ant1;
  uint8_t ant_signal2;
  uint8_t ant2;
  */
  /*
  uint8_t time[8];
  uint8_t c_flag;
  uint16_t freq;
  uint16_t chan;
  uint8_t signal;
  uint8_t ant;
  uint16_t rx_flag;
  */
};




#pragma pack(pop)



#endif // RADIOTAP_H
