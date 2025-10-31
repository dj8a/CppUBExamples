#include <thread>
#include <atomic>
#include <iostream>

std::atomic<bool> is_running = true;
std::atomic<int64_t> counter = 0;

void some_function() {
    while (is_running) {
        ++counter;
    }
}

int main()
{
    using namespace std::chrono_literals;

    std::thread worker{some_function};
    std::this_thread::sleep_for(2s);
    is_running = false;
    worker.join();

    std::cout << "counter - " << counter << std::endl;
    return 0;
}
