#include <iostream>
#include "RealtimeCycle.h"
#include "Geometry/3DVector.h"
#include "Object.h"
#include"EngineIO.h"

using std::endl;
using std::cout;
using namespace EngineIO;
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

