#include "./R.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R::R(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R::R()
		: JObject(
			"android.R",
			"()V"
		) {}
	
	// Methods
} // namespace android

