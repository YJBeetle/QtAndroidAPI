#include "./R_plurals.hpp"

namespace android
{
	// Fields
	
	R_plurals::R_plurals(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_plurals::R_plurals()
	{
		__thiz = QAndroidJniObject(
			"android.R$plurals",
			"()V"
		);
	}
	
	// Methods
} // namespace android

