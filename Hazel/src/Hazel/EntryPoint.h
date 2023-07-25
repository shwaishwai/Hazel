#pragma once

#include "Log.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_TRACE("Hello from Hazel");
	HZ_INFO("Hello from App");

	Hazel::Application* app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif