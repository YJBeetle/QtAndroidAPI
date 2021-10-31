#include "./R_fraction.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_fraction::R_fraction(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_fraction::R_fraction()
		: __JniBaseClass(
			"android.R$fraction",
			"()V"
		) {}
	
	// Methods
} // namespace android

