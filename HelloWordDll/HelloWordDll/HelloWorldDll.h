#pragma once

#ifdef HELLOWORLD_DLL_EXPORTS
	//extern __declspec(dllexport) int HelloWorld(); //C++���� ������ �Լ��� C���� �� �� �ֵ��� �� �� extern "C"�� ���
	extern "C" __declspec(dllexport) void HelloWorld(char*,int);
#else
	//extern __declspec(dllimport) int HelloWorld();
	extern "C" __declspec(dllimport) void HelloWorld(char*,int);
#endif