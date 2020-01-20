/*  threadload - load all CPU cores to 100%
    riban 2020 (brian@riban.co.uk)

    Requires c++11
*/
#include <thread>
#include <unistd.h>

using namespace std;

// Function loads a CPU core as heavily as it can with a tight loop
void load()
{
    while(true);
}

// Find quantity of cores and instantiate same quantity of threads, each running tight loop to trigger high CPU usage
int main(int argc, char** argv)
{
    unsigned int nCores = thread::hardware_concurrency();
    for(unsigned int nThread = 0; nThread < nCores; ++nThread)
    {
        thread t(load);
        t.detach();
    }
    pause();
    return 0;
}
