# TinyLilFucker

An absolutely microscopic (metaphorically) microcontroller board based on an STM32C071. The name is fully deserved.

Part of **Hack Club Stardance**.

---

## Technical Specifications

| Feature | Details |
| --- | --- |
| **Microcontroller** | STM32C071 (Arm Cortex-M0+, up to 48 MHz) |
| **Form Factor** | Exact width of a USB-C connector |
| **Input Voltage** | 5V via USB-C / VBUS pin |
| **Logic Level** | 3.3V (Onboard LDO regulator) |
| **Pin Count** | 10 pins total (6 GPIO, 2x GND, 1x 3.3V, 1x 5V/VBUS) |
| **Onboard Controls** | Tactile Reset Pushbutton |
| **Indicators** | Onboard RGB LED |

---

## Pinout Mapping

The 10-pin header brings out power rails and standard GPIO lines for compact hardware integration.

| Pin | Function | Type | Description |
| --- | --- | --- | --- |
| **1** | `GND` | Power | System Ground |
| **2** | `3V3` | Power | Regulated 3.3V Output |
| **3** | `5V` / `VBUS` | Power | USB Power Input / 5V Bus |
| **4** | `GPIO 1` | I/O | General Purpose I/O (e.g., PA0) |
| **5** | `GPIO 2` | I/O | General Purpose I/O (e.g., PA1) |
| **6** | `GPIO 3` | I/O | General Purpose I/O (e.g., PA2) |
| **7** | `GPIO 4` | I/O | General Purpose I/O (e.g., PA3) |
| **8** | `GPIO 5` | I/O | General Purpose I/O (e.g., PA4) |
| **9** | `GPIO 6` | I/O | General Purpose I/O (e.g., PA5) |
| **10** | `GND` | Power | System Ground |

---

## Hardware Overview

* **USB-C Form Factor:** Dimensions matched directly to a USB-C port outline to serve as a tiny embedded target or inline dongle.
* **Power Management:** Runs off standard 5V VBUS directly from the USB-C connector with an onboard 3.3V regulator to power the MCU and external low-power sensors.
* **RGB LED:** Common-anode or common-cathode RGB LED routed to MCU PWM-capable pins for status signaling.
* **Reset Circuitry:** Dedicated hardware reset button driving the `NRST` line low to cycle execution cleanly.

---

## AI usage declaration
This project uses AI only in writing of the [README.md](https://github.com/purpletue/TinyLilFucker/blob/main/README.md) file. 

---

## License

This project is open-source hardware licensed under the **GNU General Public License v3.0 (GPL-3.0)**. See the [LICENSE](https://github.com/purpletue/TinyLilFucker/blob/main/LICENSE) file for the full license text.
