#include <iostream>
#include <string>
#include <stdio.h>
#if _WIN32
	#define OS_WINDOWS
#else
	#define OS_LINUX
#endif
	

#ifdef OS_WINDOWS
       #include <Windows.h>
#endif
namespace COLOR
{
	enum FCOLORS
	{
		GREEN,
		RED,
		BLUE,
		WHITE,
		BLACK,
		YELLOW,
		PURPLE,
		GRAY,
		CYAN,
		RESET,
		LIGHTGREEN,
		LIGHTRED,
		LIGHTBLUE,
		LIGHTWHITE,
		LIGHTBLACK,
		LIGHTYELLOW,
		LIGHTPURPLE,
		LIGHTGRAY,
		LIGHTCYAN
	};
	enum BCOLORS
	{
		BG_GREEN,
		BG_RED,
		BG_BLUE,
		BG_WHITE,
		BG_BLACK,
		BG_YELLOW,
		BG_PURPLE,
		BG_GRAY,
		BG_CYAN,
		BG_RESET,
		BG_LIGHTGREEN,
		BG_LIGHTRED,
		BG_LIGHTBLUE,
		BG_LIGHTWHITE,
		BG_LIGHTBLACK,
		BG_LIGHTYELLOW,
		BG_LIGHTPURPLE,
		BG_LIGHTGRAY
	};
};
std::wostream& operator<< (std::wostream& os, COLOR::FCOLORS  data)
{
	switch (data)
	{
		case COLOR::GREEN: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_GREEN);
			#else 
					std::wcout << "\033[32m";
			#endif
		}break;

		case COLOR::BLACK: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 0);
			#else 
					std::wcout << "\033[30m";
			#endif
			
		}break;

		case COLOR::BLUE: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE);
			#else 
					std::wcout << "\033[34m";
			#endif
		}break;

		case COLOR::GRAY: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
			#else 
					std::wcout << "\033[37m";
			#endif
		}break;

		case COLOR::PURPLE: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_RED);
			#else 
					std::wcout << "\033[35m";
			#endif
		}break;
		
		case COLOR::RED: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_RED);
			#else 
					std::wcout << "\033[31m";
			#endif
		}break;

		case COLOR::WHITE: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
			#else 
					std::wcout << "\033[37m";
			#endif
		}break;
		case COLOR::CYAN: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_GREEN);
			#else 
					std::wcout << "\033[36m";
			#endif
		}break;

		case COLOR::YELLOW: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN);
			#else 
					std::wcout << "\033[33m";
			#endif
		}break;

		case COLOR::RESET: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
			#else 
					std::wcout << "\033[0m";
			#endif
		}break;
	
		case COLOR::LIGHTGREEN: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			#else 
					std::wcout << "\033[32m;1m";
			#endif
		}break;

		case COLOR::LIGHTBLACK: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 0);
			#else 
					std::wcout << "\033[30m;1m";
			#endif
		}break;

		case COLOR::LIGHTBLUE: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			#else 
					std::wcout << "\033[34m;1m";
			#endif
		}break;

		case COLOR::LIGHTGRAY: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
			#else 
					std::wcout << "\033[37m;1m";
			#endif
		}break;

		case COLOR::LIGHTPURPLE: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
			#else 
					std::wcout << "\033[35m;1m";
			#endif
		}break;

		case COLOR::LIGHTRED: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_INTENSITY);
			#else 
					std::wcout << "\033[31m;1m";
			#endif
		}break;

		case COLOR::LIGHTWHITE: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			#else 
					std::wcout << "\033[37m;1m";
			#endif
		}break;

		case COLOR::LIGHTYELLOW: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			#else 
					std::wcout << "\033[33m;1m";
			#endif
		}break;

		case COLOR::LIGHTCYAN: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			#else 
					std::wcout << "\033[36m;1m";
			#endif
		}break;
	
		default:
			break;
		}
	
		return os;
	}
	
std::wostream& operator<< (std::wostream& os, COLOR::BCOLORS  data)
{
	switch (data)
	{
		case COLOR::BG_GREEN: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, BACKGROUND_GREEN);
			#else 
					std::wcout << "\033[42m";
			#endif
		}break;
	
		case COLOR::BG_BLACK: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 0);
			#else 
					std::wcout << "\033[40m";
			#endif
		}break;

		case COLOR::BG_BLUE: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, BACKGROUND_BLUE);
			#else 
					std::wcout << "\033[44m";
			#endif
		}break;

		case COLOR::BG_GRAY: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 0);
			#else 
					std::wcout << "\033[40m";
			#endif
		}break;

		case COLOR::BG_PURPLE: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, BACKGROUND_RED | BACKGROUND_BLUE);
			#else 
					std::wcout << "\033[45m";
			#endif
		}break;

		case COLOR::BG_RED: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, BACKGROUND_RED);
			#else 
					std::wcout << "\033[41m";
			#endif
		}break;

		case COLOR::BG_WHITE: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			#else 
					std::wcout << "\033[47m";
			#endif
		}break;

		case COLOR::BG_YELLOW: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, BACKGROUND_RED | BACKGROUND_GREEN);
			#else 
					std::wcout << "\033[43m";
			#endif
		}break;
		
		case COLOR::BG_CYAN: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, BACKGROUND_BLUE | BACKGROUND_GREEN);
			#else 
					std::wcout << "\033[46m";
			#endif
		}break;

		case COLOR::BG_RESET: {
			#ifdef OS_WINDOWS
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, 0);
			#else 
					std::wcout << "\033[40m";
			#endif
		}break;

		default:
			break;
	}
	return os;
}