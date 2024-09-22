#pragma once
#include <string>
#include <vulkan/vulkan_core.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace ve {
	class VeWindow {

	public:
		
		VeWindow(int w, int h, std::string name);
		~VeWindow();

		VeWindow(const VeWindow&) = delete;
		VeWindow& operator=(const VeWindow&) = delete;

		bool ShouldClose() { return glfwWindowShouldClose(window); }

		void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);

	private:

		void initWindow();

		const int width;
		const int height;

		std::string windowName;
		GLFWwindow* window;

	};
}