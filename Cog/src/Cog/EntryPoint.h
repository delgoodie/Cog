#pragma once

#ifdef COG_PLATFORM_WINDOWS

extern Cog::Application* Cog::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Cog::CreateApplication();
	app->Run();
	delete app;
}

#endif