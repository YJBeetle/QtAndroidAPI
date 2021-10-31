#include "./R_raw.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_raw::R_raw(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_raw::R_raw()
		: __JniBaseClass(
			"android.R$raw",
			"()V"
		) {}
	
	// Methods
} // namespace android

