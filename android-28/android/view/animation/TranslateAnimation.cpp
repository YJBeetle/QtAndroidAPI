#include "../../content/Context.hpp"
#include "./Transformation.hpp"
#include "./TranslateAnimation.hpp"

namespace android::view::animation
{
	// Fields
	
	// QJniObject forward
	TranslateAnimation::TranslateAnimation(QJniObject obj) : android::view::animation::Animation(obj) {}
	
	// Constructors
	TranslateAnimation::TranslateAnimation(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::animation::Animation(
			"android.view.animation.TranslateAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TranslateAnimation::TranslateAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: android::view::animation::Animation(
			"android.view.animation.TranslateAnimation",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	TranslateAnimation::TranslateAnimation(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jfloat arg5, jint arg6, jfloat arg7)
		: android::view::animation::Animation(
			"android.view.animation.TranslateAnimation",
			"(IFIFIFIF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	
	// Methods
	void TranslateAnimation::initialize(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"initialize",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::view::animation

