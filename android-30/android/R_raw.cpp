#include "./R_raw.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_raw::R_raw(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_raw::R_raw()
		: JObject(
			"android.R$raw",
			"()V"
		) {}
	
	// Methods
} // namespace android

