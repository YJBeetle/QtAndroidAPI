#include "./R_menu.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_menu::R_menu(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_menu::R_menu()
		: __JniBaseClass(
			"android.R$menu",
			"()V"
		) {}
	
	// Methods
} // namespace android

