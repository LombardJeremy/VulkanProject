#pragma once

#include "V_window.h"

namespace ve {
	class FirstApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();
	private:
		VeWindow veWindow{ WIDTH, HEIGHT, "Vulkan" };
	};
}