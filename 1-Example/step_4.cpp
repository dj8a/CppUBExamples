#include <cstdint>
#include <iostream>

bool is_running = true;
int64_t counter = 0;

void some_function() {
    while (is_running) {
        ++counter;
    }
}

int main()
{
    some_function();
    std::cout << "counter - " << counter << std::endl;
    return 0;
}
