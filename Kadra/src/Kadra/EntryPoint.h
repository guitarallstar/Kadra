#pragma once

#ifdef KD_PLATFORM_WINDOWS

extern Kadra::Application* Kadra::CreateApplication();

int main(int argc, char** argv)
{
	Kadra::Log::Init();
	KD_CORE_WARN("Initialized Log");
	int a = 5;
	KD_INFO("Hello. Var={0}", a);

	auto app = Kadra::CreateApplication();
	app->Run();
	delete app;
}

#endif // KD_PLATFORM_WINDOWS
