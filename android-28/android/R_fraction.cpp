#include "./R_fraction.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_fraction::R_fraction(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_fraction::R_fraction()
		: __JniBaseClass(
			"android.R$fraction",
			"()V"
		) {}
	
	// Methods
} // namespace android

