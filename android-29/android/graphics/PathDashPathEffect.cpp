#include "./Path.hpp"
#include "./PathDashPathEffect_Style.hpp"
#include "./PathDashPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	PathDashPathEffect::PathDashPathEffect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PathDashPathEffect::PathDashPathEffect(android::graphics::Path &arg0, jfloat &arg1, jfloat &arg2, android::graphics::PathDashPathEffect_Style &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PathDashPathEffect",
			"(Landroid/graphics/Path;FFLandroid/graphics/PathDashPathEffect$Style;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::graphics

