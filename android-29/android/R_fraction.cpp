#include "./R_fraction.hpp"

namespace android
{
	// Fields
	
	R_fraction::R_fraction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_fraction::R_fraction()
	{
		__thiz = QAndroidJniObject(
			"android.R$fraction",
			"()V"
		);
	}
	
	// Methods
} // namespace android

