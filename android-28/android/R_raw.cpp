#include "./R_raw.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_raw::R_raw(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_raw::R_raw()
		: __JniBaseClass(
			"android.R$raw",
			"()V"
		) {}
	
	// Methods
} // namespace android

