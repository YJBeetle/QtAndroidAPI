#include "../../content/Context.hpp"
#include "./Transformation.hpp"
#include "./AlphaAnimation.hpp"

namespace android::view::animation
{
	// Fields
	
	// QAndroidJniObject forward
	AlphaAnimation::AlphaAnimation(QAndroidJniObject obj) : android::view::animation::Animation(obj) {}
	
	// Constructors
	AlphaAnimation::AlphaAnimation(android::content::Context arg0, JObject arg1)
		: android::view::animation::Animation(
			"android.view.animation.AlphaAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AlphaAnimation::AlphaAnimation(jfloat arg0, jfloat arg1)
		: android::view::animation::Animation(
			"android.view.animation.AlphaAnimation",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean AlphaAnimation::willChangeBounds() const
	{
		return callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	jboolean AlphaAnimation::willChangeTransformationMatrix() const
	{
		return callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace android::view::animation

