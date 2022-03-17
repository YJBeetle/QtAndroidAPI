#pragma once

#include "../view/View.def.hpp"
#include "../../java/time/Duration.def.hpp"
#include "../../java/time/Instant.def.hpp"
#include "./SplashScreenView.def.hpp"

namespace android::window
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::Duration SplashScreenView::getIconAnimationDuration() const
	{
		return callObjectMethod(
			"getIconAnimationDuration",
			"()Ljava/time/Duration;"
		);
	}
	inline java::time::Instant SplashScreenView::getIconAnimationStart() const
	{
		return callObjectMethod(
			"getIconAnimationStart",
			"()Ljava/time/Instant;"
		);
	}
	inline android::view::View SplashScreenView::getIconView() const
	{
		return callObjectMethod(
			"getIconView",
			"()Landroid/view/View;"
		);
	}
	inline void SplashScreenView::remove() const
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	inline void SplashScreenView::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
} // namespace android::window

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/FrameLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::window;
#endif
