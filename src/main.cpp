#include <iostream>
#include <thread>
#include <chrono>
#include "CountEvent.hpp"

int main() {
    // Define the target count and the event handler
    int targetCount = 10;
    auto exitHandler = []() {
        std::cout << "Target count reached. Exiting the program." << std::endl;
        exit(0);
    };

    // Create a CountEvent instance
    CountEvent countEvent(targetCount, exitHandler);

    // Start a loop that sleeps, increments the count, and checks for the event
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Sleep for 1 second
        countEvent.incrementCount();
        std::cout << "Count: " << countEvent.getCount() << std::endl;
    }

    return 0;
}
