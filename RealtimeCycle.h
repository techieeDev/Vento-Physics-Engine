#pragma once
#include<chrono>
#include<thread>

class RealtimeCycle
{
	public:
		// Time between frames in ms
		int frameRenderInterval;
		float time;

		float GetFramerate() {
			return (1 / frameRenderInterval * 0.001);
		}
		
		float GetDeltaTime() {
			return frameRenderInterval * 0.001;
		}
		
		void RenderFrame(){
			time += frameRenderInterval; 
			std::this_thread::sleep_for(std::chrono::milliseconds(frameRenderInterval));
		}
};