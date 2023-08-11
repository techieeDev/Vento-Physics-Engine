#include <iostream>
#include "RealtimeCycle.h"
#include "3DVector.h"
#include "Object.h"
#include"IOEngine.h"

using std::endl;
using std::cout;
using namespace IOEngine;
RealtimeCycle cycle;

int main()
{
	cycle.frameRenderInterval = 16;

	// ~ Object Settings
	Object Cube;
	_3DVector direction;
	float CubeSpeed = 0.72;

	while (true)
	{
		direction = Instantiate(1, 0, 0);
		direction.MultiplyBy(CubeSpeed * cycle.GetDeltaTime());
		Cube.Translate(direction);
		Cube.WorldPosition.DisplayComponents();
		cycle.RenderFrame();
	}
	return 0;
}

