#include "./R_menu.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_menu::R_menu(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_menu::R_menu()
		: __JniBaseClass(
			"android.R$menu",
			"()V"
		) {}
	
	// Methods
} // namespace android

