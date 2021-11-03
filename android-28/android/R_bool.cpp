#include "./R_bool.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_bool::R_bool(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_bool::R_bool()
		: JObject(
			"android.R$bool",
			"()V"
		) {}
	
	// Methods
} // namespace android

