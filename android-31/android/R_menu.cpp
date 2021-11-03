#include "./R_menu.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_menu::R_menu(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_menu::R_menu()
		: JObject(
			"android.R$menu",
			"()V"
		) {}
	
	// Methods
} // namespace android

