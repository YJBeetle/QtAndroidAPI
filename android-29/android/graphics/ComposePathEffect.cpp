#include "./PathEffect.hpp"
#include "./ComposePathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	ComposePathEffect::ComposePathEffect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ComposePathEffect::ComposePathEffect(android::graphics::PathEffect arg0, android::graphics::PathEffect arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ComposePathEffect",
			"(Landroid/graphics/PathEffect;Landroid/graphics/PathEffect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::graphics

