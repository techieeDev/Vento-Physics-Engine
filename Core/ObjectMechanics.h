#pragma once
#include"../Geometry/3DVector.h"

using Ivectors::_3DVector;

namespace ObjectMechanics
{
	_3DVector CalculateDeltaAcceleration(_3DVector force, float mass) {
		_3DVector deltaAcceleration = force;
		deltaAcceleration.DivideBy(mass);
		return deltaAcceleration;
	}

	_3DVector CalculateDeltaVelocity(_3DVector deltaAcceleration, float dt) {
		_3DVector deltaVelocity = deltaAcceleration;
		deltaVelocity.DivideBy(2);
		deltaVelocity.MultiplyBy(dt);
		return deltaVelocity;
	}

	_3DVector CalculateDeltaPosition(_3DVector deltaVelocity, float dt) {
		_3DVector deltaPosition = deltaVelocity;
		deltaPosition.DivideBy(2);
		deltaPosition.MultiplyBy(dt);
		return deltaPosition;
	}

	const vector<float> CalculateAngles(_3DVector force) {
		return vector<float>{
			atan2(force.y, force.x),
			atan2(force.y, force.z),
			atan2(force.x, force.z)
		};
	}

	void UpdateVelocity(_3DVector &currentVelocity, _3DVector deltaVelocity)
	{
		currentVelocity.AddBy(deltaVelocity);
	}

	void UpdateAcceleration(_3DVector &currentAcceleration, _3DVector deltaAcceleration)
	{
		currentAcceleration.AddBy(deltaAcceleration);
	}

	void UpdatePosition(_3DVector &currentPos, _3DVector deltaPos) {
		currentPos.AddBy(deltaPos);
	}
}