#include "./R_plurals.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_plurals::R_plurals(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_plurals::R_plurals()
		: JObject(
			"android.R$plurals",
			"()V"
		) {}
	
	// Methods
} // namespace android

