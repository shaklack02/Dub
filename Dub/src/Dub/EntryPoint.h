#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern DUB_ENG::Application* DUB_ENG::CreateApplication();

int main(int arg, char** argv)
{
	printf("Starting Engine");
	auto app = DUB_ENG::CreateApplication();
	app->Run();
	delete app;
}

#endif // DEBUG
