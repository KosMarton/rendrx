#pragma once

#ifdef RX_PLATFORM_WINDOWS

extern RendrX::Application* RendrX::CreateApplication();

int main(int argc, char** argv)
{
	auto app = RendrX::CreateApplication();
	app->Run();
	delete app;
}

#endif