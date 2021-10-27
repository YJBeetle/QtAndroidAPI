#include "../../content/Context.hpp"
#include "./Transformation.hpp"
#include "./AlphaAnimation.hpp"

namespace android::view::animation
{
	// Fields
	
	AlphaAnimation::AlphaAnimation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlphaAnimation::AlphaAnimation(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AlphaAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	AlphaAnimation::AlphaAnimation(jfloat &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AlphaAnimation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean AlphaAnimation::willChangeBounds()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	jboolean AlphaAnimation::willChangeTransformationMatrix()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace android::view::animation

