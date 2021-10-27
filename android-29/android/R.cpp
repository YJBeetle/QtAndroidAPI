#include "./R.hpp"

namespace android
{
	// Fields
	
	R::R(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R::R()
	{
		__thiz = QAndroidJniObject(
			"android.R",
			"()V"
		);
	}
	
	// Methods
} // namespace android

