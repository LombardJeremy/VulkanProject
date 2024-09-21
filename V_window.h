#pragma once
#include <GLFW/glfw3.h>
#include <string>
#define GLFW_INCLUDE_VULKAN

namespace ve {
	class VeWindow {

	public:
		
		VeWindow(int w, int h, std::string name);
		~VeWindow();

		VeWindow(const VeWindow&) = delete;
		VeWindow& operator=(const VeWindow&) = delete;

		bool ShouldClose() { return glfwWindowShouldClose(window); }

	private:

		void initWindow();

		const int width;
		const int height;

		std::string windowName;
		GLFWwindow* window;

	};
}