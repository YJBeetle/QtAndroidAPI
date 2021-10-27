#include "./PathEffect.hpp"
#include "./SumPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	SumPathEffect::SumPathEffect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SumPathEffect::SumPathEffect(android::graphics::PathEffect &arg0, android::graphics::PathEffect &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SumPathEffect",
			"(Landroid/graphics/PathEffect;Landroid/graphics/PathEffect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::graphics

