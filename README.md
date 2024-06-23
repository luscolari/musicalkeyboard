# Musical Keyboard
## Play different song with your computer keyboard

This program allows you to play songs using your computer keyboard. Each key corresponds to a specific musical note, and pressing a key generates a sound of that note. 

## What This Algorithm Does?
This algorithmic program translates keyboard input into musical notes. It provides a simple interactive interface where users can play a selection of musical notes by pressing corresponding keys on their keyboard. Here's a breakdown of its functionality:

* Upon execution, the program displays a welcome message and instructions. <br/>
* It waits for user input in the form of specific keys which are mapped to musical notes.
* When a valid key is pressed, the program produces a sound corresponding to the musical note using the Beep(frequency, duration) function.
* The duration of each note is set to 1000 milliseconds (1 second), but this can be adjusted by modifying the time variable in the source code.
* Pressing Q quits the program.

## Keyboard Mapping

| Note | Keyboard Key |
|------|--------------|
| C    | A            |
| D    | S            |
| E    | D            |
| F    | F            |
| G    | G            |
| A    | H            |
| B    | J            |

## Instruction for Use
1. ### Prerequisites
* A C compiler (e.g., GCC on Unix/Linux, or a C compiler for Windows like MinGW or Visual Studio)
* Windows operating system (for **windows.h** and **Beep()** function usage)

2. ### Installation

2.1. Clone the repository:
   ```
   git clone https://github.com/luscolari/keyboard
  ```
2.2. Compile the program:
  ```
gcc musical_keyboard.c -o musical_keyboard
  ```
2.3. Run the executable:
  ```
./musical_keyboard
  ```
_PS: On Windows, you might need to run musical_keyboard.exe instead._

## Notes
* This program uses the **Beep()** function from windows.h to generate sounds.
* Adjust time variable in the code (int time = 1000;) to change the duration of each note (in milliseconds).
