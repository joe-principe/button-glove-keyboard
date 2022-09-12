Button Glove Keyboard
========================
# Resources  
Keyboard scan codes:
* https://www.lookuptables.com/coding/keyboard-scan-codes
* https://www.freepascal.org/docs-html/rtl/keyboard/kbdscancode.html
* https://en.wikipedia.org/wiki/USB_human_interface_device_class#Keyboards
* https://www.win.tue.nl/~aeb/linux/kbd/scancodes-14.html
* C:\Users\Joe\Downloads\hut1_3_0.pdf
* https://stackoverflow.com/a/27085911
* 

# Design Ideas
* Have buttons on finger tips and use inputs to type like on a keyboard
* Debounce the buttons using resistor (and capacitor?)
* Combinations of button presses -> actual keyboard input
    * Double/Triple Tap Keys?
        * Pro: More outputs with fewer inputs
        * Con: Slower typing (?), slightly more complex
        * Double Tap only might be faster than regular typing because it allows another layer of inputs without having to do weird button combinations
* Restricted to ASCII only for simplicity
    * Extended ASCII?
* Use QMK?
* Most common keys (vowels, space, shift, enter, etc.) on single press, less common keys on multi-press
* LEDs to indicate Shift and Caps Lock
* Bluetooth to communicate with computer/phone/etc.

# Current Design Issues
- [ ] 

# Finger-Index Layouts
## Left Even, Right Odd
Pros:
* Same finger on opposite hand is only one index different.
* Numbered increasingly from outside inward (from pinky to thumb).
* Even on left, Odd on Right

Cons:
* Numbering seems weird if viewed left-to-right with hands facing downward
* Would people group their fingers together when counting them? No, they don't

| Finger | Index |
| :--- | :--- |
| Left Pinky | 0 |
| Right Pinky | 1 |
| Left Ring | 2 |
| Right Ring | 3 |
| Left Bird | 4 |
| Right Bird | 5 |
| Left Fore | 6 |
| Right Fore | 7 |
| Left Thumb | 8 |
| Right Thumb | 9 |

## Left-Right Straight-Through
Pros:
* Numbering is easy to remember

Cons:
* Indices between matching fingers is weird (Right is greater than Left by odd amount that increases inside outwardly)

| Finger | Index |
| :--- | :--- |
| Left Pinky | 0 |
| Left Ring | 1 |
| Left Bird | 2 |
| Left Fore | 3 |
| Left Thumb | 4 |
| Right Thumb | 5 |
| Right Fore | 6 |
| Right Bird | 7 |
| Right Ring | 8 |
| Right Pinky | 9 |

## Left++, ++Right 
| Finger | Index |
| :--- | :--- |
| Left Pinky | 0 |
| Left Ring | 1 |
| Left Bird | 2 |
| Left Fore | 3 |
| Left Thumb | 4 |
| Right Pinky | 5 |
| Right Ring | 6 |
| Right Bird | 7 |
| Right Fore | 8 |
| Right Thumb | 9 |

## Counting Layout
Pros:
* This is the way that lots of people count their fingers
* Index difference is 5 for all fingers
* Probably the most logical for most people

Cons:
* Numbering seems weird with palms face down

| Finger | Index |
| :--- | :--- |
| Left Fore | 0 |
| Left Bird | 1 |
| Left Ring | 2 |
| Left Pinky | 3 |
| Left Thumb | 4 |
| Right Fore | 5 |
| Right Bird | 6 |
| Right Ring | 7 |
| Right Pinky | 8 |
| Right Thumb | 9 |
