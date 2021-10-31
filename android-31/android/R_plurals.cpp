#include "./R_plurals.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_plurals::R_plurals(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_plurals::R_plurals()
		: __JniBaseClass(
			"android.R$plurals",
			"()V"
		) {}
	
	// Methods
} // namespace android

