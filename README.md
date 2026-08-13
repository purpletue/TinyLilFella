# TinyLilFella

An absolutely microscopic (metaphorically) microcontroller board based on an STM32C071. The name is fully deserved.

Part of **Hack Club Stardance**.

psst hey guy who's reading this due to my stardance funding request get assembly please everything is SMD i cant solder that many tiny components on a board less than a cubic centimeter in size

---

## Technical Specifications

| Feature | Details |
| --- | --- |
| **Microcontroller** | STM32C071 (Arm Cortex-M0+, up to 48 MHz) |
| **Form Factor** | Dongle-sized |
| **Input Voltage** | 5V via USB-A / VBUS pin |
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
| **2** | `GND` | Power | System Ground |
| **3** | `3V3` | Power | Regulated 3.3V Output |
| **4** | `5v / VBUS` | Power | USB Power Input / 5V Bus |
| **5** | `GPIO 1` | I/O | General Purpose I/O (PA0) |
| **6** | `GPIO 2` | I/O | General Purpose I/O (PA1) |
| **7** | `GPIO 3` | I/O | General Purpose I/O (PA2) |
| **8** | `GPIO 4` | I/O | General Purpose I/O (PA3) |
| **9** | `GPIO 5` | I/O | General Purpose I/O (PA4) |
| **10** | `GPIO 6` | I/O | General Purpose I/O (PA5) |

---

## Hardware Overview

* **Dongle Form-factor:** Sized like your average dongle.
* **Power Management:** Runs off standard 5V VBUS directly from the USB-A connector with an onboard 3.3V regulator to power the MCU and external low-power sensors.
* **RGB LED:** Common-anode or common-cathode RGB LED routed to MCU PWM-capable pins for status signaling.
* **Reset Circuitry:** Dedicated hardware reset button driving the `NRST` line low to cycle execution cleanly.

---

## AI usage declaration
This project uses AI only in writing of the [README.md](https://github.com/purpletue/TinyLilFella/blob/main/README.md) file. 

---

## License

This project is open-source hardware licensed under the **GNU General Public License v3.0 (GPL-3.0)**. See the [LICENSE](https://github.com/purpletue/TinyLilFella/blob/main/LICENSE) file for the full license text.
