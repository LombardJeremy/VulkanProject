#include "../Header/first_app.h"

namespace ve {
	void FirstApp::run()
	{
		while (!veWindow.ShouldClose()) {
			glfwPollEvents();
		}
	}
}


