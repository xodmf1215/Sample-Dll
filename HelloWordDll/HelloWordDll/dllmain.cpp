// dllmain.cpp : DLL 애플리케이션의 진입점을 정의합니다. 프로젝트 설정에서 '미리 컴파일된 헤더' 옵션을 쓰고있다.
// visual studio 2017 버전 전에는 stdafx.h 를 주로 썼다.
#include "pch.h"

#define HELLOWORLD_DLL_EXPORTS
#include "HelloWorldDll.h"

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

void HelloWorld(char* src,int size)
{
    //int len = sizeof(src); //포인터 크기, size는 별도 변수가 있어야함
    const char word[11] = "HelloWorld";
    for (int i = 0; i < 10; i++)
    {
        if (i + 1 == size)
        {
            src[i] = '\0';
            break;
        }
        src[i] = word[i];
    }
}
