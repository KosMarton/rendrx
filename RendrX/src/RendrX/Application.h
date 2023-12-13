#pragma once

#include "Core.h"

namespace RendrX
{
	class RENDRX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client application(s)
	Application* CreateApplication();

}