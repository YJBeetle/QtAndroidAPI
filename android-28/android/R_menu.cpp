#include "./R_menu.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_menu::R_menu(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_menu::R_menu()
		: JObject(
			"android.R$menu",
			"()V"
		) {}
	
	// Methods
} // namespace android

