#pragma once

#include "../../content/Context.def.hpp"
#include "./Animation.def.hpp"
#include "./LayoutAnimationController.def.hpp"
#include "./AnimationUtils.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline AnimationUtils::AnimationUtils()
		: JObject(
			"android.view.animation.AnimationUtils",
			"()V"
		) {}
	
	// Methods
	inline jlong AnimationUtils::currentAnimationTimeMillis()
	{
		return callStaticMethod<jlong>(
			"android.view.animation.AnimationUtils",
			"currentAnimationTimeMillis",
			"()J"
		);
	}
	inline android::view::animation::Animation AnimationUtils::loadAnimation(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadAnimation",
			"(Landroid/content/Context;I)Landroid/view/animation/Animation;",
			arg0.object(),
			arg1
		);
	}
	inline JObject AnimationUtils::loadInterpolator(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadInterpolator",
			"(Landroid/content/Context;I)Landroid/view/animation/Interpolator;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::animation::LayoutAnimationController AnimationUtils::loadLayoutAnimation(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadLayoutAnimation",
			"(Landroid/content/Context;I)Landroid/view/animation/LayoutAnimationController;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::animation::Animation AnimationUtils::makeInAnimation(android::content::Context arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeInAnimation",
			"(Landroid/content/Context;Z)Landroid/view/animation/Animation;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::animation::Animation AnimationUtils::makeInChildBottomAnimation(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeInChildBottomAnimation",
			"(Landroid/content/Context;)Landroid/view/animation/Animation;",
			arg0.object()
		);
	}
	inline android::view::animation::Animation AnimationUtils::makeOutAnimation(android::content::Context arg0, jboolean arg1)
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::animation;
#endif
