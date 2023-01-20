#pragma once

#ifdef HELLOWORLD_DLL_EXPORTS
	//extern __declspec(dllexport) int HelloWorld(); //C++에서 정의한 함수를 C에서 쓸 수 있도록 할 때 extern "C"를 사용
	extern "C" __declspec(dllexport) void HelloWorld(char*,int);
#else
	//extern __declspec(dllimport) int HelloWorld();
	extern "C" __declspec(dllimport) void HelloWorld(char*,int);
#endif