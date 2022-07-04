#pragma once

#ifdef KD_PLATFORM_WINDOWS

extern Kadra::Application* Kadra::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Kadra::CreateApplication();
	app->Run();
	delete app;
}

#endif // KD_PLATFORM_WINDOWS
