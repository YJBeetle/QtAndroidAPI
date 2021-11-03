#include "./R_plurals.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	R_plurals::R_plurals(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_plurals::R_plurals()
		: JObject(
			"android.R$plurals",
			"()V"
		) {}
	
	// Methods
} // namespace android

