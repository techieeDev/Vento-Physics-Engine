#pragma once
#include<iostream>
#include<vector>
#include"../Geometry/3DVector.h"
using Ivectors::_3DVector;

class Process
{
protected:
public:
	 std::string ID;
	 Process(std::string _ID) : ID(_ID) {}
};

class ObjectProcess : Process
{

public:
	vector<_3DVector> RealtimeForces;

	ObjectProcess(std::string _ID) : ID(_ID) {

	}
};