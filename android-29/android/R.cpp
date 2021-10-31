#include "./R.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R::R(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R::R()
		: __JniBaseClass(
			"android.R",
			"()V"
		) {}
	
	// Methods
} // namespace android

