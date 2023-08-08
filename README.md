# CountEvent Template with Chrono

This is a simple C++ template that demonstrates the use of `std::chrono` to create a countdown event that triggers an exit event when a specific count is reached. The template consists of a header file, source files, and an example main program.

## Functionality

The template provides a `CountEvent` class, which encapsulates the functionality for counting and triggering an event. Here's a brief overview of the template's functionality:

- **CountEvent Class (`CountEvent.hpp`, `CountEvent.cpp`):**
  - `CountEvent` class defines a counting mechanism with a specified target count and an event handler.
  - `incrementCount()` method increases the count and triggers the event if the target count is reached.
  - `isTargetReached()` method checks if the target count has been reached.

- **Main Program (`main.cpp`):**
  - The main program initializes a `CountEvent` instance with a target count and an event handler that exits the program when the target count is reached.
  - The program enters a loop that sleeps for 1 second, increments the count, and checks if the target count is reached. If so, the exit event is triggered.

## How to Use

1. Clone or download this repository to your local machine.

2. Navigate to the project root directory.

3. **Compile:**
   - Open a terminal/command prompt.
   - Navigate to the `src` directory: `cd src`
   - Compile the source files using your preferred C++ compiler. For example:
     ```
     g++ -std=c++11 CountEvent.cpp main.cpp -o main
     ```

4. **Run:**
   - Run the compiled executable: `./main`

5. **Observe:**
   - The program will start counting and displaying the count each second.
   - Once the count reaches the specified target, the program will display a message and exit.

Feel free to modify the template to suit your needs or integrate it into your own projects.

## Requirements

- C++ compiler that supports C++11 or later.
- Standard Library components used in the template.
