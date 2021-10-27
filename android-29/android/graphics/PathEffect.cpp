#include "./PathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	PathEffect::PathEffect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PathEffect::PathEffect()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PathEffect",
			"()V"
		);
	}
	
	// Methods
} // namespace android::graphics

