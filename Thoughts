Onsong has some limits to its custom pedal:
- A max number of 8 inputs are available for the pedal  
- There is a scroll function
- There is an extra forward pedal ? 
- There are mac command key based shortcuts

Total number of pedal inputs:
8 (+1?) + scroll

Possible configurations:
- Page
  - adjust 
  - up
  - down
  - switch

- Scroll
  - adjust 
  - up
  - down
  - top
  - bottom

- Section
  - adjust 
  - previous
  - next
  - switch

- Set
- Song
- Viewport
- Zoom
- Key

Confirmed input commands: 
- Page up
- Page down
- Set switch
- Song previous
- Song next
- Key up
- Key down

Input commands to investigate:
- Scroll up
- Scroll down
- Set previous
- Set next
- Key adjust
- Key change

The pedl has to be a keyboard pedal, with a character mapped to an input

I will repurpose the ESP32 to communicate with the iPad via BT.
- I could use the BLEkeyboard library to easily emulate a library, but has a caveat where I need to use a third party app to connect with the iPad.
- I could also use the ad2p library that sets up an actual BT connection, visible through the settings app, but may be harder to implement a keyboard because this library is primarily focused on sharing music via BT.
  - I could try to figure out how the BT is implemented and do it myself, but could and will take more time.

I think both libraries are worth a shot.

I want the pedal to have a rechargeable battery with a power indicator via BT and an LED. It can recharge via USB-C.
