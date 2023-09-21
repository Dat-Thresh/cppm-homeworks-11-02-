#pragma once

#ifdef CLASS_LEAVER_DYNAMIC_EXPORTS
	#define CLASS_LEAVER_DYNAMIC_API __declspec(dllexport)
#else
	#define CLASS_LEAVER_DYNAMIC_API __declspec(dllimport)
#endif // CLASS_LEAVER_DYNAMIC_EXPORTS


#include <string>
class Leaver {
public:
	CLASS_LEAVER_DYNAMIC_API std::string leave(std::string name);
};