# TinyLilFella – An Microscopic STM32 Board

### My Tiny Glowing Submission to Hack Club Stardance

---

## Renders

*Visuals because everyone loves eye candy.*

<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/4aa8cbda-f008-42fd-ae91-3d93655f3b05" />
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/3f899669-22ea-4e11-890b-cbcf9b7b9d89" />
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/545deb7c-687c-403f-9c3e-5f810db8bf11" />
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/514aafd1-6758-486f-8049-729fae999b9c" />


---

## What is this?

An absolutely microscopic (metaphorically... and literally, being under 0.8 cm³) microcontroller board based on the **STM32C071**.

The name is fully deserved. It packs power, an RGB LED, and 6 breakout GPIO lines into a tiny USB dongle form factor!

> **P.S. To the Stardance Reviewer:** Please grant assembly (PCBA)! Everything is SMD and I physically cannot hand-solder that many tiny components on a board smaller than a single cubic centimeter without going blind.

### Features:

* **STM32C071 Microcontroller** – Arm Cortex-M0+ running up to 48 MHz.
* **Dongle Form Factor** – Plugs straight in like a USB key.
* **Tactile Reset Button** – Dedicated hardware reset driving `NRST` low.
* **Onboard RGB LED** – Connected to PWM-capable pins for status/vibes.
* **10-Pin Header Breakout** – Power rails and 6 general-purpose GPIOs for compact integration.

---

## How It Works:

The board takes 5V power directly via standard USB-A / VBUS line. An onboard low-dropout (LDO) regulator steps that down to a clean 3.3V logic level to power the main STM32 MCU and external low-power sensors.

The 10-pin header brings out 6 direct GPIO lines (`PA0` through `PA5`) alongside system ground and power rails for easy modular hooking up.

---

## Why?

Built for **Hack Club Stardance**! I wanted to see how far I could shrink down a functional, highly integrated ARM Cortex dev board into a minimal 0.75 cm³ footprint.

---

## Technical Specifications

| Feature | Details |
| --- | --- |
| **Microcontroller** | STM32C071 (Arm Cortex-M0+, up to 48 MHz) |
| **Form Factor** | Dongle-sized (< 0.8 cm³) |
| **Input Voltage** | 5V via USB-A / VBUS pin |
| **Logic Level** | 3.3V (Onboard LDO regulator) |
| **Pin Count** | 10 pins total (6 GPIO, 2x GND, 1x 3.3V, 1x 5V/VBUS) |
| **Onboard Controls** | Tactile Reset Pushbutton |
| **Indicators** | Onboard RGB LED |

---

## Pinout Mapping

| Pin | Function | Type | Description |
| --- | --- | --- | --- |
| **1** | `GND` | Power | System Ground |
| **2** | `GND` | Power | System Ground |
| **3** | `3V3` | Power | Regulated 3.3V Output |
| **4** | `5V / VBUS` | Power | USB Power Input / 5V Bus |
| **5** | `GPIO 1` | I/O | General Purpose I/O (PA0) |
| **6** | `GPIO 2` | I/O | General Purpose I/O (PA1) |
| **7** | `GPIO 3` | I/O | General Purpose I/O (PA2) |
| **8** | `GPIO 4` | I/O | General Purpose I/O (PA3) |
| **9** | `GPIO 5` | I/O | General Purpose I/O (PA4) |
| **10** | `GPIO 6` | I/O | General Purpose I/O (PA5) |

---

## AI Usage Declaration

This project uses AI only in the generation and layout refinement of this `README.md` file.

---

## Contribute

Want to make it better? Open a PR, suggest a feature, or just yell at me on GitHub.

---

## License & Disclaimer

This project is open-source hardware licensed under the **GNU General Public License v3.0 (GPL-3.0)**. Powered 100% by **vibes**. If it breaks, short-circuits, or opens a micro black hole, **that’s on you.**
