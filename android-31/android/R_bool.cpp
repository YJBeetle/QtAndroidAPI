#include "./R_bool.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_bool::R_bool(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_bool::R_bool()
		: JObject(
			"android.R$bool",
			"()V"
		) {}
	
	// Methods
} // namespace android

