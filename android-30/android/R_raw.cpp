#include "./R_raw.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_raw::R_raw(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_raw::R_raw()
		: JObject(
			"android.R$raw",
			"()V"
		) {}
	
	// Methods
} // namespace android

