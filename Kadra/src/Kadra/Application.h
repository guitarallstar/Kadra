#pragma once

#include "Core.h"

namespace Kadra {

	class KADRA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}