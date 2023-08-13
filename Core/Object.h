#pragma once
#include"../Geometry/3DVector.h"
#include"ObjectMechanics.h"
using Ivectors::_3DVector;
using namespace ObjectMechanics;

class Object
{
public:

	// Physical properties

	// Object's overall mass
	float Mass = 1.0;
	
	// Object'sr real-time acceleration
	_3DVector Acceleration = _3DVector(0.0001, 0.0001, 0.0001);

	// Object's real-time velocity
	_3DVector Velocity = _3DVector(0.0001, 0.0001, 0.0001);

	// The object's position relative to the global coordinate system
	_3DVector WorldPosition = _3DVector(0, 0, 0);
	
	void Translate(_3DVector translationVec){
		WorldPosition.AddBy(translationVec);
	}

	// Object force property

	void AddTranslationForce(_3DVector force, float dt)
	{
		// Calculate delta acceleration
		_3DVector deltaAcceleration = CalculateDeltaAcceleration(force, Mass);

		// Calculate delta velocity
		_3DVector deltaVelocity = CalculateDeltaVelocity(deltaAcceleration, dt);

		// Calculate delta position
		_3DVector deltaPos = CalculateDeltaPosition(deltaVelocity, dt);

		// Find angles
		//const vector<float> angles = CalculateAngles(force);

		// Update physics
		UpdateAcceleration(Acceleration, deltaAcceleration);
		UpdateVelocity(Velocity, deltaVelocity);
		UpdatePosition(WorldPosition, deltaPos);
	}
};

