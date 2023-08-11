#pragma once
#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

namespace Ivectors
{
	struct _3DVector {

	public:
		float x;
		float y;
		float z;

		vector<float> GetComponents()
		{
			return vector<float> {x, y, z};
		}

		void SetComponents(float _x, float _y, float _z)
		{
			x = _x;
			y = _y;
			z = _z;
		}

		void AddBy(_3DVector additionVec)
		{
			x += additionVec.x;
			y += additionVec.y;
			z += additionVec.z;
		}

		void MultiplyBy(float _multiplier) {
			x *= _multiplier;
			y *= _multiplier;
			z *= _multiplier;
		}

		void MultiplyBy(_3DVector multiplierVec)
		{
			x *= multiplierVec.x;
			y *= multiplierVec.y;
			z *= multiplierVec.z;
		}

		float GetMagnitude() {
			float sum = pow(x, 2) + pow(y, 2) + pow(z, 2);
			return sqrt(sum);
		}

		void DisplayComponents()
		{
			string info = "x: " + std::to_string(x) + "; " + "y: " + std::to_string(y) + "; " + "z: " + std::to_string(z);
			cout << info << endl;
		}
	};

	_3DVector Instantiate(float x, float y, float z)
	{
		_3DVector vec3D;
		vec3D.SetComponents(x, y, z);
		return vec3D;
	};
}
