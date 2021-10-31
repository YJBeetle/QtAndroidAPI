#include "./R_bool.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_bool::R_bool(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_bool::R_bool()
		: __JniBaseClass(
			"android.R$bool",
			"()V"
		) {}
	
	// Methods
} // namespace android

