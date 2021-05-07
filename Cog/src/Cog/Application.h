#pragma once
#include "Core.h"

namespace Cog {

	class COG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in client
	Application* CreateApplication();
}
