// dllmain.cpp : DLL 애플리케이션의 진입점을 정의합니다. 프로젝트 설정에서 '미리 컴파일된 헤더' 옵션을 쓰고있다.
// visual studio 2017 버전 전에는 stdafx.h 를 주로 썼다.
#include "pch.h"

#define EXPORTING_DLL
#include "helloDLL.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

char* HelloWorld()
{
    char* res;
    res = (char*)malloc(sizeof(char) * 11);
    strcpy_s(res, sizeof(char)*11, "HelloWorld");

    return res;
}
