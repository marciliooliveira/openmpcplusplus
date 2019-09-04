#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int nthreads, tid;
    omp_set_num_threads(5);
    #pragma omp parallel private(tid)
    {
        cout << endl;
        tid = omp_get_thread_num();
        cout << "Hello world from thread: " << tid << endl;
    }
}
