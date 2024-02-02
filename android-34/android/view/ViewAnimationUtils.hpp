#pragma once

#include "../animation/Animator.def.hpp"
#include "./View.def.hpp"
#include "./ViewAnimationUtils.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::animation::Animator ViewAnimationUtils::createCircularReveal(android::view::View arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4)
	{
		return callStaticObjectMethod(
			"android.view.ViewAnimationUtils",
			"createCircularReveal",
			"(Landroid/view/View;IIFF)Landroid/animation/Animator;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
