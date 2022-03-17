#pragma once

#include "../graphics/Insets.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DisplayCutout.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline DisplayCutout::DisplayCutout(android::graphics::Rect arg0, JObject arg1)
		: JObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Rect;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DisplayCutout::DisplayCutout(android::graphics::Insets arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Rect arg3, android::graphics::Rect arg4)
		: JObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Insets;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		) {}
	inline DisplayCutout::DisplayCutout(android::graphics::Insets arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Rect arg3, android::graphics::Rect arg4, android::graphics::Insets arg5)
		: JObject(
			"android.view.DisplayCutout",
			"(Landroid/graphics/Insets;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Rect;Landroid/graphics/Insets;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	inline jboolean DisplayCutout::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::Rect DisplayCutout::getBoundingRectBottom() const
	{
		return callObjectMethod(
			"getBoundingRectBottom",
			"()Landroid/graphics/Rect;"
		);
	}
	inline android::graphics::Rect DisplayCutout::getBoundingRectLeft() const
	{
		return callObjectMethod(
			"getBoundingRectLeft",
			"()Landroid/graphics/Rect;"
		);
	}
	inline android::graphics::Rect DisplayCutout::getBoundingRectRight() const
	{
		return callObjectMethod(
			"getBoundingRectRight",
			"()Landroid/graphics/Rect;"
		);
	}
	inline android::graphics::Rect DisplayCutout::getBoundingRectTop() const
	{
		return callObjectMethod(
			"getBoundingRectTop",
			"()Landroid/graphics/Rect;"
		);
	}
	inline JObject DisplayCutout::getBoundingRects() const
	{
		return callObjectMethod(
			"getBoundingRects",
			"()Ljava/util/List;"
		);
	}
	inline jint DisplayCutout::getSafeInsetBottom() const
	{
		return callMethod<jint>(
			"getSafeInsetBottom",
			"()I"
		);
	}
	inline jint DisplayCutout::getSafeInsetLeft() const
	{
		return callMethod<jint>(
			"getSafeInsetLeft",
			"()I"
		);
	}
	inline jint DisplayCutout::getSafeInsetRight() const
	{
		return callMethod<jint>(
			"getSafeInsetRight",
			"()I"
		);
	}
	inline jint DisplayCutout::getSafeInsetTop() const
	{
		return callMethod<jint>(
			"getSafeInsetTop",
			"()I"
		);
	}
	inline android::graphics::Insets DisplayCutout::getWaterfallInsets() const
	{
		return callObjectMethod(
			"getWaterfallInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	inline jint DisplayCutout::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DisplayCutout::toString() const
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
