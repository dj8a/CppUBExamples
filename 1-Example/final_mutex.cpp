#include <thread>
#include <mutex>
#include <print>

bool is_running = true;
int64_t counter = 0;
std::mutex mutex;

void some_function() {
    std::lock_guard lock{mutex};
    while (is_running) {
        ++counter;
    }
}

int main()
{
    using namespace std::chrono_literals;

    std::thread worker{some_function};
    std::this_thread::sleep_for(2s);
    {
        std::lock_guard lock{mutex};
        is_running = false;
    }
    worker.join();
    std::print("counter - {0}", counter);
    return 0;
}
