# 8relay-arduino
Easy to use Arduino Library for 8-RELAY Card

To use the [8-RELAYS](https://sequentmicrosystems.com/collections/all-io-cards/products/raspberry-pi-relays-stackable-card) card with Arduino  UNO or NANO, TEENSY, FEATHER or ESP32 boards you need a [Raspberry Pi Replacement Cad](https://sequentmicrosystems.com/collections/accessories/products/raspberry-pi-replacement-card), known as S-BRIDGE, and this library.

## Install 

To download click the DOWNLOAD ZIP button, rename the uncompressed folder to "SM_8relay" and copy to the libraries subdirectory of your sketchbook directory ("This PC > Documents > Arduino > libraries" for a Windows PC or "Home > arduino > libraries" on Linux PC). Now launch the Arduino environment. If you open the Sketch > Import Library menu, you should see SM_8relay inside. The library will be compiled with sketches that use it.

## Usage

Connect [8-RELAYS](https://sequentmicrosystems.com/collections/all-io-cards/products/raspberry-pi-relays-stackable-card) card with the [Raspberry Pi Replacement Cad](https://sequentmicrosystems.com/collections/accessories/products/raspberry-pi-replacement-card) then connect your favorite Arduino processor. Open Arduino IDE go to File > Examples > SM_8relay > 8relay. The example show how to use multiple 8-RELAYS cards with the same Arduino processor.


## Notice

The library works only with TEENSY 3.2/3.5/3.6/4.0/4.1, Arduino UNO, Arduino NANO, Adafruit FEATHER, ESP32 DEVKIT V1. The main reason for this is the electrical and mechanical constraints of the S-BRIDGE card. If your favorite processor is not on the list, you also can use it if it has an I2C port, but you need to connect the I2C port directly to the 8-RELAYS card. 

