#pragma once
#include<iostream>

namespace EngineIO
{
	template<typename T>
	void DebugLine(T message) {
		std::cout << message << std::endl;;
	}
}