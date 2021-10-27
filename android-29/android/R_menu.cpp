#include "./R_menu.hpp"

namespace android
{
	// Fields
	
	R_menu::R_menu(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_menu::R_menu()
	{
		__thiz = QAndroidJniObject(
			"android.R$menu",
			"()V"
		);
	}
	
	// Methods
} // namespace android

