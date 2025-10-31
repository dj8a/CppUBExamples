#include <thread>
#include <mutex>
#include <iostream>

bool is_running = true;
std::mutex mutex;

int64_t counter = 0;
std::mutex counter_mutex;

bool check_is_running() {
    std::lock_guard<std::mutex> lock{mutex};
    return is_running;
}
void some_function() {
    while (check_is_running()) {
        std::lock_guard<std::mutex> lock{counter_mutex};
        ++counter;
    }
}

int main()
{
    using namespace std::chrono_literals;

    std::thread worker{some_function};
    std::this_thread::sleep_for(2s);
    {
        std::lock_guard<std::mutex> lock{mutex};
        is_running = false;
    }
    worker.join();

    std::lock_guard<std::mutex> lock{counter_mutex};
    std::cout << "counter - " << counter << std::endl;
    return 0;
}
