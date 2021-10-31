#include "./R_plurals.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_plurals::R_plurals(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_plurals::R_plurals()
		: __JniBaseClass(
			"android.R$plurals",
			"()V"
		) {}
	
	// Methods
} // namespace android

