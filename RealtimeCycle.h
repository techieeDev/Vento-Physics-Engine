#pragma once
#include<chrono>
#include<thread>

class RealtimeCycle
{
	public:
		// Time between frames in ms
		int frameRenderInterval;

		// Time progression since the beginning
		float time;

		// The number of frames rendering per second
		float GetFramerate() {
			return (1 / frameRenderInterval * 0.001);
		}
		
		// The time between the current and the last frame
		float GetDeltaTime() {
			return frameRenderInterval * 0.001;
		}
		
		void RenderFrame(){
			time += frameRenderInterval; 
			std::this_thread::sleep_for(std::chrono::milliseconds(frameRenderInterval));
		}
};