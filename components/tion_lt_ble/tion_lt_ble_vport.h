#pragma once

#include "../tion-api/tion-api-lt.h"
#include "../tion-api/tion-api-ble-lt.h"
#include "../tion/tion_vport_ble.h"

namespace esphome {
namespace tion {

class TionLtBleIO : public esphome::tion::TionBleIO<dentra::tion::TionLtBleProtocol> {
 public:
  explicit TionLtBleIO() { this->set_ble_encryption(esp_ble_sec_act_t::ESP_BLE_SEC_ENCRYPT); }
};

class TionLtBleVPort : public TionVPortBLEComponent<TionLtBleIO> {
 public:
  TionLtBleVPort(io_type *io) : TionVPortBLEComponent(io) {}

  void dump_config() override;

  void set_api(void *) {}
};

}  // namespace tion
}  // namespace esphome
