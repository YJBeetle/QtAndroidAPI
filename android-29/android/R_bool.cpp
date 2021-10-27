#include "./R_bool.hpp"

namespace android
{
	// Fields
	
	R_bool::R_bool(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_bool::R_bool()
	{
		__thiz = QAndroidJniObject(
			"android.R$bool",
			"()V"
		);
	}
	
	// Methods
} // namespace android

