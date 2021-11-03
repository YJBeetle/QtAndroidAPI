#include "./R_fraction.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	R_fraction::R_fraction(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_fraction::R_fraction()
		: JObject(
			"android.R$fraction",
			"()V"
		) {}
	
	// Methods
} // namespace android

