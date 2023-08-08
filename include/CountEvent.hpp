#ifndef COUNTEVENT_HPP
#define COUNTEVENT_HPP

#include <functional>

class CountEvent {
public:
    using EventHandler = std::function<void()>;

    // Constructor that takes the target count and an event handler function
    CountEvent(int targetCount, EventHandler handler);

    // Method to increment the count and trigger the event if the target count is reached
    void incrementCount();

    // Method to check if the target count has been reached
    bool isTargetReached() const;

    // Method to retrieve the current count value
    int getCount() const;

private:
    int count;           // Current count
    int targetCount;     // Target count that triggers the event
    EventHandler eventHandler; // Event handler function
};

#endif // COUNTEVENT_HPP