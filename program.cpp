#include <iostream>
#include "Core/RealtimeCycle.h"
#include "Core/Object.h"
#include "Geometry/3DVector.h"
#include "Tools/EngineIO.h"
	
const _3DVector _FIXED_FORCE_01 = _3DVector(7.5f, 0.5f, 14);

using std::endl;
using std::cout;
using namespace EngineIO;
RealtimeCycle cycle;

int main()
{
	cycle.frameRenderInterval = 16;

	// ~ Object Settings
	Object Cube;
	Cube.Mass = 50;

	while (true)
	{
		float deltaTime = cycle.GetDeltaTime();
		Cube.AddTranslationForce(_FIXED_FORCE_01, deltaTime);
		Cube.Acceleration.DisplayComponents();
		cycle.RenderFrame();
	}
	return 0;
}

