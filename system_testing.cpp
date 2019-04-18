#include <stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

int main(void)
{
    string command = "((python python_test.py 3 4) && (python python_test2.py)) &";
    const char* comm1 = command.c_str();
    //command = "python python_test2.py";
    //const char* comm2 = command.c_str();
    system(comm1);
    return 0;
}
