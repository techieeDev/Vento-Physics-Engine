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
	class _3DVector {

	public:
		 _3DVector(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

		float x;
		float y;
		float z;

		vector<float> GetComponents()
		{
			return vector<float> {x, y, z};
		}

		// Modify the vector's components
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

		// Multiply by number
		void MultiplyBy(float _multiplier) {
			x *= _multiplier;
			y *= _multiplier;
			z *= _multiplier;
		}

		// Multiply by vector
		void MultiplyBy(_3DVector multiplierVec)
		{
			x *= multiplierVec.x;
			y *= multiplierVec.y;
			z *= multiplierVec.z;
		}

		// Divide by number
		void DivideBy(float divider) {
			x /= divider;
			y /= divider;
			z /= divider;
		}

		float GetMagnitude() {
			float sum = pow(x, 2) + pow(y, 2) + pow(z, 2);
			return sqrt(sum);
		}

		// Logs vector's components to the console
		void DisplayComponents()
		{
			string info = "x: " + std::to_string(x) + "; " + "y: " + std::to_string(y) + "; " + "z: " + std::to_string(z);
			cout << info << endl;
		}
	};


}
