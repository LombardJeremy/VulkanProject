#pragma once

#include "ve_pipeline.h"
#include "ve_engine_device.hpp"
#include "ve_swap_chain.hpp"
#include "V_window.h"

//std
#include <memory>

namespace ve {
	class FirstApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();
	private:
		VeWindow veWindow{ WIDTH, HEIGHT, "Vulkan" };
		VeDevice veDevice{veWindow};
		VeSwapChain veSwapChain{veDevice, veWindow.getExtent()};
		VePipeline vePipeline{
			veDevice,
			"Shaders/spv/vert.spv",
			"Shaders/spv/frag.spv",
			VePipeline::defaultPipelineConfigInfo(WIDTH,HEIGHT)};
	};
}