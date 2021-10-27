#include "./R_raw.hpp"

namespace android
{
	// Fields
	
	R_raw::R_raw(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_raw::R_raw()
	{
		__thiz = QAndroidJniObject(
			"android.R$raw",
			"()V"
		);
	}
	
	// Methods
} // namespace android

