#include "./Drawable.hpp"
#include "./Animatable2_AnimationCallback.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	Animatable2_AnimationCallback::Animatable2_AnimationCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Animatable2_AnimationCallback::Animatable2_AnimationCallback()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.Animatable2$AnimationCallback",
			"()V"
		);
	}
	
	// Methods
	void Animatable2_AnimationCallback::onAnimationEnd(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationEnd",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Animatable2_AnimationCallback::onAnimationStart(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationStart",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics::drawable

