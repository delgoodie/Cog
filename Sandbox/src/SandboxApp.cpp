#include <Cog.h>

class Sandbox : public Cog::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};


Cog::Application* Cog::CreateApplication() {
	return new Sandbox();
}