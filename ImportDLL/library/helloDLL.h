#pragma once

#ifndef HELLO_H
	#define HELLO_H
	#ifdef EXPORTING_DLL
		extern __declspec(dllexport) char* HelloWorld();
	#else
		extern __declspec(dllimport) char* HelloWorld();
	#endif
#endif