#include "MarketChecker.h"

int MarketChecker::test() {
	auto response = cpr::Get(cpr::Url{ "http://httpbin.org/get" });
	std::cout << response.text << std::endl;
	return 0;
}

