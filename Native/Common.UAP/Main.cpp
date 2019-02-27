#include "pch.h"

#include "TestApp.h"

int __cdecl main(::Platform::Array<::Platform::String^> ^ args)
{
	(void)args; // Unused parameter
	::Windows::UI::Xaml::Application::Start(ref new ::Windows::UI::Xaml::ApplicationInitializationCallback(
		[](::Windows::UI::Xaml::ApplicationInitializationCallbackParams ^ p) {
			(void)p; // Unused parameter
			auto app = ref new ::TestApp1::App();
		}));
}
