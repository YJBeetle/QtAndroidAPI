#include "./CornerPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	CornerPathEffect::CornerPathEffect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CornerPathEffect::CornerPathEffect(jfloat &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.CornerPathEffect",
			"(F)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::graphics

