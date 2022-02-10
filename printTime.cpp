#include <iostream>
#include <Windows.h>


int main() {
	SYSTEMTIME time;
	GetLocalTime(&time);

	TIME_ZONE_INFORMATION time_zone;
	GetTimeZoneInformation(&time_zone);

	std::cout << time.wYear
			<< " " << (time.wMonth        > 9  ? "" : "0") << time.wMonth
			<< " " << (time.wDay          > 9  ? "" : "0") << time.wDay
			<< " " << (time.wHour         > 9  ? "" : "0") << time.wHour
			<< " " << (time.wMinute       > 9  ? "" : "0") << time.wMinute
			<< " " << (time.wSecond       > 9  ? "" : "0") << time.wSecond
			<< " " << (time.wMilliseconds > 99 ? "" : time.wMilliseconds > 9 ? "0" : "00") << time.wMilliseconds
			<< std::endl;
}