#include "../../content/Context.hpp"
#include "./Animation.hpp"
#include "./LayoutAnimationController.hpp"
#include "./AnimationUtils.hpp"

namespace android::view::animation
{
	// Fields
	
	// QJniObject forward
	AnimationUtils::AnimationUtils(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AnimationUtils::AnimationUtils()
		: JObject(
			"android.view.animation.AnimationUtils",
			"()V"
		) {}
	
	// Methods
	jlong AnimationUtils::currentAnimationTimeMillis()
	{
		return callStaticMethod<jlong>(
			"android.view.animation.AnimationUtils",
			"currentAnimationTimeMillis",
			"()J"
		);
	}
	android::view::animation::Animation AnimationUtils::loadAnimation(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadAnimation",
			"(Landroid/content/Context;I)Landroid/view/animation/Animation;",
			arg0.object(),
			arg1
		);
	}
	JObject AnimationUtils::loadInterpolator(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadInterpolator",
			"(Landroid/content/Context;I)Landroid/view/animation/Interpolator;",
			arg0.object(),
			arg1
		);
	}
	android::view::animation::LayoutAnimationController AnimationUtils::loadLayoutAnimation(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadLayoutAnimation",
			"(Landroid/content/Context;I)Landroid/view/animation/LayoutAnimationController;",
			arg0.object(),
			arg1
		);
	}
	android::view::animation::Animation AnimationUtils::makeInAnimation(android::content::Context arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeInAnimation",
			"(Landroid/content/Context;Z)Landroid/view/animation/Animation;",
			arg0.object(),
			arg1
		);
	}
	android::view::animation::Animation AnimationUtils::makeInChildBottomAnimation(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeInChildBottomAnimation",
			"(Landroid/content/Context;)Landroid/view/animation/Animation;",
			arg0.object()
		);
	}
	android::view::animation::Animation AnimationUtils::makeOutAnimation(android::content::Context arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeOutAnimation",
			"(Landroid/content/Context;Z)Landroid/view/animation/Animation;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::animation

