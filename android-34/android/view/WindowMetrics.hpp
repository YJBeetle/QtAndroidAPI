#pragma once

#include "../graphics/Rect.def.hpp"
#include "./WindowInsets.def.hpp"
#include "../../JString.hpp"
#include "./WindowMetrics.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline WindowMetrics::WindowMetrics(android::graphics::Rect arg0, android::view::WindowInsets arg1)
		: JObject(
			"android.view.WindowMetrics",
			"(Landroid/graphics/Rect;Landroid/view/WindowInsets;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline WindowMetrics::WindowMetrics(android::graphics::Rect arg0, android::view::WindowInsets arg1, jfloat arg2)
		: JObject(
			"android.view.WindowMetrics",
			"(Landroid/graphics/Rect;Landroid/view/WindowInsets;F)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline android::graphics::Rect WindowMetrics::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jfloat WindowMetrics::getDensity() const
	{
		return callMethod<jfloat>(
			"getDensity",
			"()F"
		);
	}
	inline android::view::WindowInsets WindowMetrics::getWindowInsets() const
	{
		return callObjectMethod(
			"getWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	inline JString WindowMetrics::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
