#include "CountEvent.hpp"

CountEvent::CountEvent(int targetCount, EventHandler handler)
    : count(0), targetCount(targetCount), eventHandler(handler) {}

void CountEvent::incrementCount() {
    ++count;
    if (isTargetReached()) {
        eventHandler(); // Trigger the event handler if target count is reached
    }
}

bool CountEvent::isTargetReached() const {
    return count >= targetCount;
}

int CountEvent::getCount() const {
    return count; // Return the current count value
}