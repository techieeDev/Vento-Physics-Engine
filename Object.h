#pragma once
#include"3DVector.h"
using namespace Ivectors;

class Object
{
public:
	_3DVector WorldPosition;

	void Translate(_3DVector translationVec){
		WorldPosition.AddBy(translationVec);
	}
};