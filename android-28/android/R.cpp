#include "./R.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R::R(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R::R()
		: __JniBaseClass(
			"android.R",
			"()V"
		) {}
	
	// Methods
} // namespace android

