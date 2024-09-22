#pragma once

#include "V_window.h"
#include "ve_pipeline.h"
#include "ve_engine_device.hpp"

namespace ve {
	class FirstApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();
	private:
		VeWindow veWindow{ WIDTH, HEIGHT, "Vulkan" };
		VeDevice veDevice{veWindow};
		VePipeline vePipeline{
			veDevice,
			"Shaders/spv/vert.spv",
			"Shaders/spv/frag.spv",
			VePipeline::defaultPipelineConfigInfo(WIDTH,HEIGHT)};
	};
}