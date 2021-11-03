#include "./R.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R::R(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R::R()
		: JObject(
			"android.R",
			"()V"
		) {}
	
	// Methods
} // namespace android

