#include "./R_fraction.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_fraction::R_fraction(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_fraction::R_fraction()
		: JObject(
			"android.R$fraction",
			"()V"
		) {}
	
	// Methods
} // namespace android

