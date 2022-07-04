#include <Kadra.h>

class Sandbox : public Kadra::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Kadra::Application* Kadra::CreateApplication()
{
	return new Sandbox();
}