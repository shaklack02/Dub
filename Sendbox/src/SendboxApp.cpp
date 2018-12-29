#include <DUB_ENG.h>

class Sendbox : public DUB_ENG::Application
{
public:
	Sendbox()
	{

	}
	~Sendbox()
	{

	}
};

DUB_ENG::Application* DUB_ENG::CreateApplication()
{
	return new Sendbox();
}