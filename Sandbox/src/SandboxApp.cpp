#include <RendrX.h>

class Sandbox : public RendrX::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

RendrX::Application* RendrX::CreateApplication()
{
	return new Sandbox();
}