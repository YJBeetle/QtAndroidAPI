#pragma once

#include "../graphics/Insets.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./DisplayCutout.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WindowInsets.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline WindowInsets::WindowInsets(android::view::WindowInsets &arg0)
		: JObject(
			"android.view.WindowInsets",
			"(Landroid/view/WindowInsets;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::WindowInsets WindowInsets::consumeDisplayCutout() const
	{
		return callObjectMethod(
			"consumeDisplayCutout",
			"()Landroid/view/WindowInsets;"
		);
	}
	inline android::view::WindowInsets WindowInsets::consumeStableInsets() const
	{
		return callObjectMethod(
			"consumeStableInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	inline android::view::WindowInsets WindowInsets::consumeSystemWindowInsets() const
	{
		return callObjectMethod(
			"consumeSystemWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	inline jboolean WindowInsets::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::view::DisplayCutout WindowInsets::getDisplayCutout() const
	{
		return callObjectMethod(
			"getDisplayCutout",
			"()Landroid/view/DisplayCutout;"
		);
	}
	inline android::graphics::Insets WindowInsets::getMandatorySystemGestureInsets() const
	{
		return callObjectMethod(
			"getMandatorySystemGestureInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	inline jint WindowInsets::getStableInsetBottom() const
	{
		return callMethod<jint>(
			"getStableInsetBottom",
			"()I"
		);
	}
	inline jint WindowInsets::getStableInsetLeft() const
	{
		return callMethod<jint>(
			"getStableInsetLeft",
			"()I"
		);
	}
	inline jint WindowInsets::getStableInsetRight() const
	{
		return callMethod<jint>(
			"getStableInsetRight",
			"()I"
		);
	}
	inline jint WindowInsets::getStableInsetTop() const
	{
		return callMethod<jint>(
			"getStableInsetTop",
			"()I"
		);
	}
	inline android::graphics::Insets WindowInsets::getStableInsets() const
	{
		return callObjectMethod(
			"getStableInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	inline android::graphics::Insets WindowInsets::getSystemGestureInsets() const
	{
		return callObjectMethod(
			"getSystemGestureInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	inline jint WindowInsets::getSystemWindowInsetBottom() const
	{
		return callMethod<jint>(
			"getSystemWindowInsetBottom",
			"()I"
		);
	}
	inline jint WindowInsets::getSystemWindowInsetLeft() const
	{
		return callMethod<jint>(
			"getSystemWindowInsetLeft",
			"()I"
		);
	}
	inline jint WindowInsets::getSystemWindowInsetRight() const
	{
		return callMethod<jint>(
			"getSystemWindowInsetRight",
			"()I"
		);
	}
	inline jint WindowInsets::getSystemWindowInsetTop() const
	{
		return callMethod<jint>(
			"getSystemWindowInsetTop",
			"()I"
		);
	}
	inline android::graphics::Insets WindowInsets::getSystemWindowInsets() const
	{
		return callObjectMethod(
			"getSystemWindowInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	inline android::graphics::Insets WindowInsets::getTappableElementInsets() const
	{
		return callObjectMethod(
			"getTappableElementInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	inline jboolean WindowInsets::hasInsets() const
	{
		return callMethod<jboolean>(
			"hasInsets",
			"()Z"
		);
	}
	inline jboolean WindowInsets::hasStableInsets() const
	{
		return callMethod<jboolean>(
			"hasStableInsets",
			"()Z"
		);
	}
	inline jboolean WindowInsets::hasSystemWindowInsets() const
	{
		return callMethod<jboolean>(
			"hasSystemWindowInsets",
			"()Z"
		);
	}
	inline jint WindowInsets::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::view::WindowInsets WindowInsets::inset(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"inset",
			"(IIII)Landroid/view/WindowInsets;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean WindowInsets::isConsumed() const
	{
		return callMethod<jboolean>(
			"isConsumed",
			"()Z"
		);
	}
	inline jboolean WindowInsets::isRound() const
	{
		return callMethod<jboolean>(
			"isRound",
			"()Z"
		);
	}
	inline android::view::WindowInsets WindowInsets::replaceSystemWindowInsets(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"replaceSystemWindowInsets",
			"(Landroid/graphics/Rect;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	inline android::view::WindowInsets WindowInsets::replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"replaceSystemWindowInsets",
			"(IIII)Landroid/view/WindowInsets;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline JString WindowInsets::toString() const
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
