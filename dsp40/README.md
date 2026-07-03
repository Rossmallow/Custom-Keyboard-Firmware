![Layout](files/Layout.png)



This layout was inspired by the [Miryoku layout](https://github.com/qmk/qmk_firmware/tree/master/users/manna-harbour_miryoku).


This is a recreation of my [Daisy40 layout](https://github.com/Rossmallow/Custom-Keyboard-Firmware/tree/master/daisy/ross).
Since getting the Daisy40, it has become one of my favorite boards, but I've had two PCBs from kprepublic die on me. It's been a while since I've been able to use the board, and in that time, kprepublic no longer offer the PCB on their website (although I guess it's available on Aliexpress). I've had bad luck with those boards, though, and the mini USB port is very outdated at this point. Someone on the 40% Keyboards Discord server pointed me to this DSP40 from Keebio.

After some struggle with relearning qmk and realizing that since I last coded a keymap, many of the key codes have changed, I finally got the firmware compiled.
Then, when I tried to flash the PCB I first learned that unlike all my previous boards, I need to use the .bin file rather than the .hex file, which was an easy enough fix.
After that, I learned that the PCB came with no drivers installed, so I had to use a software called [Zadig](https://zadig.akeo.ie/) (I used version 2.9 from 2024.06.13) to install Windows drivers onto the PCB. Only then, did the firmware finally flash.

Per usual, A pre-compiled QMK .bin file is included in the files directory.



Created by [Ross Nelson](https://rossnelson.me)
