# Custom Onsong Pedal
A custom keyboard based pedal for Onsong, 
a songbook application used for organizing 
songs. 

Onsong is a songbook app with the ability 
to customize chords, add capo,  and create
sets or playlists. This app also supports 
pedals to be able to change songs, chords, 
etc. handsfree. They offer their own pedals, 
or a custom keyboard based pedal with support for at most 8 different characters that converts keyboard presses into inputs. This project
implements a custom keyboard pedal for use in live performances.

This pedal was developed to solve an issue I was having. I am part of my church's worship team, and changing the song or scrolling through them forces me to take a hand away from the piano. By having foot pedals to control those actions, I can keep playing while keeping up with the current song.

This project uses the [ESP32 BLE Keyboard library](https://github.com/T-vK/ESP32-BLE-Keyboard), which handles BLE communication and transmission of keystrokes. The software uses a simple for loop that continuously checks for button presses and makes use of a software debounce to filter out acidental presses or interference. 

Hardware wise, the project uses the [HiLetgo ESP-WROOM-32S](https://www.amazon.com/dp/B0718T232Z?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1), a USB-C, 5V 2A boost converter with lithium battery charging protection board, and a 3.7V, 1600mAh Li-Po battery. This setup provides the pedals with enough power to last several worship services on a single charge. 

The design for the pedals take on a modular approach. Each button or pedal has its own individual case, and when connected via magnetic pogo connectors to either the main pedal that houses all of the hardware components, or the chain of pedals already connected to the main pedal, power is provided to that pedal and it can then transmit its associated character.

