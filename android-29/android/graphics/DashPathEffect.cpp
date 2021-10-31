#include "./DashPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	DashPathEffect::DashPathEffect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DashPathEffect::DashPathEffect(jfloatArray arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.DashPathEffect",
			"([FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::graphics

