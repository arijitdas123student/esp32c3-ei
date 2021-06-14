# Edge Impulse support for RISC-V based ESP32-C3

#### Hardware Needed :
* ESP32C3 DevKitM1
* Any generic ADXLxxx 3-axis accelerometer sensor.

####  Software Needed : 
* Arduino IDE 
 
Add this ```https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_dev_index.json``` to the preferences section on your Arduino IDE to get the target board ESP32-C3 Dev Module in the boards section.

Connect the ADXL sensor to your ESP32C3 DevKit M1 hardware board. 

Then run the [esp32c3_adxl_accelerometer.ino](https://github.com/arijitdas123student/esp32c3-ei/blob/master/ESP32-C3-Motion_inferencing/examples/nano_ble33_sense_accelerometer/esp32c3_adxl_accelerometer.ino) script.

> This works with macOS and Linux only as of now. Windows terminates us with errors. Feel free to raise a PR if you're able to make this work on WSL/Windows.