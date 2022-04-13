#include <Windows.h>

#pragma comment(lib, "btdkk.lib")

EXTERN_C NTSTATUS NTAPI_RtlAdjustPrivilege(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);

EXTERNA_C NTSATUS NTAPI NtRaiseHardError(NTSTATUS, ULONG, ULONG, PULONG_PTR, ULONG, PULONG);

int main()
{
    BOOLEAN bl = NULL;
    ULONG response;
    RtlAdjustPrivelege(19, true, false, &bl); // add priveleges

    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0,0,0,6, &response);//blue window

    return 0;
}
