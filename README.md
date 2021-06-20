# Edge Impulse support for RISC-V based ESP32-C3

#### Hardware Needed :
* [ESP32C3 DevKitM1](https://www.mouser.com/ProductDetail/Espressif-Systems/ESP32-C3-DevKitM-1?qs=pUKx8fyJudB1sOWbbEnGFw==&gclid=CjwKCAjwn6GGBhADEiwAruUcKtCvod_18JO8ZZPtCcAdCUTGwyu3S15hNCz_Er3TOdSGRBWeq2euoBoC8CkQAvD_BwE)
* [Any generic ADXLxxx 3-axis accelerometer sensor](https://www.amazon.com/HiLetgo-ADXL345-Digital-Acceleration-Transmission/dp/B01DLG4OU6/ref=sr_1_1_sspa?dchild=1&keywords=adxl345&qid=1623753466&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUFDV1oxQUtYNkE2Tk4mZW5jcnlwdGVkSWQ9QTA1NTA2Njg3SEMxTkhIWUFBWlcmZW5jcnlwdGVkQWRJZD1BMDA4NTQ1NjJMMlAxOTlZM0IwUlEmd2lkZ2V0TmFtZT1zcF9hdGYmYWN0aW9uPWNsaWNrUmVkaXJlY3QmZG9Ob3RMb2dDbGljaz10cnVl)

####  Software Needed : 
* [Arduino IDE](https://www.arduino.cc/en/software) 
 
Add this ```https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_dev_index.json``` to the preferences section on your Arduino IDE to get the target board ESP32-C3 Dev Module in the boards section.

Connect the ADXL sensor to your ESP32C3 DevKit M1 hardware board. 

Then run the [esp32c3_adxl_accelerometer.ino](https://github.com/arijitdas123student/esp32c3-ei/blob/master/ESP32-C3-Motion_inferencing/examples/nano_ble33_sense_accelerometer/esp32c3_adxl_accelerometer.ino) script.

> This works with macOS and Linux only as of now. Windows and WSL(GUI) terminates us with errors. Feel free to raise a PR if you're able to make this work on Windows.