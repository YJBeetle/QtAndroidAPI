#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./ViewFlipper.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ViewFlipper::ViewFlipper(android::content::Context arg0)
		: android::widget::ViewAnimator(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ViewFlipper::ViewFlipper(android::content::Context arg0, JObject arg1)
		: android::widget::ViewAnimator(
			"android.widget.ViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JString ViewFlipper::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint ViewFlipper::getFlipInterval() const
	{
		return callMethod<jint>(
			"getFlipInterval",
			"()I"
		);
	}
	inline jboolean ViewFlipper::isAutoStart() const
	{
		return callMethod<jboolean>(
			"isAutoStart",
			"()Z"
		);
	}
	inline jboolean ViewFlipper::isFlipping() const
	{
		return callMethod<jboolean>(
			"isFlipping",
			"()Z"
		);
	}
	inline void ViewFlipper::setAutoStart(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoStart",
			"(Z)V",
			arg0
		);
	}
	inline void ViewFlipper::setFlipInterval(jint arg0) const
	{
		callMethod<void>(
			"setFlipInterval",
			"(I)V",
			arg0
		);
	}
	inline void ViewFlipper::startFlipping() const
	{
		callMethod<void>(
			"startFlipping",
			"()V"
		);
	}
	inline void ViewFlipper::stopFlipping() const
	{
		callMethod<void>(
			"stopFlipping",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"
#include "./ViewAnimator.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
