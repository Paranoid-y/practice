#include <iostream>
#include <stdlib.h>
using namespace std;
#include "CUDACtxMan.h"

extern char **environ;
int main(int argc, char *argv[])
{
    std::cout << "--------------"<< std::endl;
    if (!CCUDACtxMan::Init())
    {
        return -1;
    };

    int i = 0;
    while (environ[i] != NULL)
    {
        i++;
        INFO("%s",environ[i]);
    }

    setenv("CUDA_DEVICE_ORDER", "PCI_BUS_ID", 1);
    std::cout<< "------------------------------------------------------------------------------------------------------------------" << std::endl;
    i = 0;
    while (environ[i] != NULL)
    {
        i++;
        INFO("%s",environ[i]);
    }

    int iGpuCount = 0;
    if (cuDeviceGetCount(&iGpuCount) != CUDA_SUCCESS)
    {
        INFO("Fail to Get Device count\n");
        return false;
    }
    for (int iGpuID = 0; iGpuID < iGpuCount; iGpuID++)
    {
        CUdevice cDevice = 0;
        char name[128];
        int nlen = 128;
        if (cuDeviceGetName(name, nlen, iGpuID) == CUDA_SUCCESS)
        {
            INFOW("GPUId %d name %s", iGpuID, name);
        }
    }
    return 0;

}