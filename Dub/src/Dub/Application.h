#pragma once


#include "Core.h"

namespace DUB_ENG{

	class   DB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in clint
	Application* CreateApplication();
}
