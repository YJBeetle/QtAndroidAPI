#include "./R_bool.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_bool::R_bool(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_bool::R_bool()
		: __JniBaseClass(
			"android.R$bool",
			"()V"
		) {}
	
	// Methods
} // namespace android

