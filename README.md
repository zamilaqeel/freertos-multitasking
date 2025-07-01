# freertos-multitasking

This project demonstrates how to use FreeRTOS multitasking features on the ESP32-S3 using the PlatformIO build system and the Arduino framework.

## Features

- Runs multiple FreeRTOS tasks on the ESP32-S3
- Example code for task creation, deletion, and inter-task communication
- Ready to build and upload with PlatformIO

## Requirements

- ESP32-S3 development board
- [PlatformIO](https://platformio.org/) (via VS Code)
- USB-A to USB-C cable

## Getting Started

### 1. Clone this repository

```sh
git clone https://github.com/zamilaqeel/freertos-multitasking.git
cd freertos-multitasking
```

### 2. Open with PlatformIO

- Open the folder in VS Code with the PlatformIO extension installed.

### 3. Build and Upload

- Connect your ESP32-S3 board via USB.
- Click the **PlatformIO: Upload** button or run:
  ```
  pio run --target upload
  ```

### 4. Monitor Serial Output

- Click the **PlatformIO: Monitor** button or run:
  ```
  pio device monitor
  ```
- You should see output from your FreeRTOS tasks.

## File Structure

```
freertos-multitasking/
├── .gitignore
├── platformio.ini
├── README.md
├── include/
│   └── README
├── lib/
│   └── README
├── src/
│   └── main.cpp
├── test/
│   └── README
└── .pio/                # PlatformIO build system folder (auto-generated, can be ignored)
    └── ...              # Build artifacts and dependencies
└── .vscode/             # VS Code settings (optional)
    └── ...
```

## Example Output

```
Task1 running
Task2 running
Task1 running
Task2 running
...
```

## Notes

- Place your FreeRTOS code in `src/main.cpp`.
- Add any custom libraries to the `lib/` folder.
- Add header files to the `include/` folder.

## References

- [PlatformIO Documentation](https://docs.platformio.org/)
- [ESP32 Arduino FreeRTOS](https://docs.espressif.com/projects/arduino-esp32/en/latest/api/freertos.html)
- [FreeRTOS Official Site](https://www.freertos.org/)

---

**Project by [zamilaqeel](https://github.com/zamilaqeel)**
