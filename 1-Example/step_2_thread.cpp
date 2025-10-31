#include <thread>

bool is_running = true;

void some_function() {
    while (is_running) {
        // TO-DO Something
    }
}

int main()
{
    std::thread worker{some_function};
    is_running = false;
    worker.join();

    return 0;
}
