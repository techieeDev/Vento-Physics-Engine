#pragma once
#include<iostream>

namespace IOEngine
{
	template<typename T>
	void DebugLine(T message) {
		std::cout << message << std::endl;;
	}
}