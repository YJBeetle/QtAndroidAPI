#pragma once

#include "../content/Context.def.hpp"
#include "./ViewConfiguration.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ViewConfiguration::ViewConfiguration()
		: JObject(
			"android.view.ViewConfiguration",
			"()V"
		) {}
	
	// Methods
	inline android::view::ViewConfiguration ViewConfiguration::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.view.ViewConfiguration",
			"get",
			"(Landroid/content/Context;)Landroid/view/ViewConfiguration;",
			arg0.object()
		);
	}
	inline jlong ViewConfiguration::getDefaultActionModeHideDuration()
	{
		return callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getDefaultActionModeHideDuration",
			"()J"
		);
	}
	inline jint ViewConfiguration::getDoubleTapTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getDoubleTapTimeout",
			"()I"
		);
	}
	inline jint ViewConfiguration::getEdgeSlop()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getEdgeSlop",
			"()I"
		);
	}
	inline jint ViewConfiguration::getFadingEdgeLength()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getFadingEdgeLength",
			"()I"
		);
	}
	inline jlong ViewConfiguration::getGlobalActionKeyTimeout()
	{
		return callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getGlobalActionKeyTimeout",
			"()J"
		);
	}
	inline jint ViewConfiguration::getJumpTapTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getJumpTapTimeout",
			"()I"
		);
	}
	inline jint ViewConfiguration::getKeyRepeatDelay()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getKeyRepeatDelay",
			"()I"
		);
	}
	inline jint ViewConfiguration::getKeyRepeatTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getKeyRepeatTimeout",
			"()I"
		);
	}
	inline jint ViewConfiguration::getLongPressTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getLongPressTimeout",
			"()I"
		);
	}
	inline jint ViewConfiguration::getMaximumDrawingCacheSize()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMaximumDrawingCacheSize",
			"()I"
		);
	}
	inline jint ViewConfiguration::getMaximumFlingVelocity()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMaximumFlingVelocity",
			"()I"
		);
	}
	inline jint ViewConfiguration::getMinimumFlingVelocity()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMinimumFlingVelocity",
			"()I"
		);
	}
	inline jint ViewConfiguration::getPressedStateDuration()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getPressedStateDuration",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScrollBarFadeDuration()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollBarFadeDuration",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScrollBarSize()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollBarSize",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScrollDefaultDelay()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollDefaultDelay",
			"()I"
		);
	}
	inline jfloat ViewConfiguration::getScrollFriction()
	{
		return callStaticMethod<jfloat>(
			"android.view.ViewConfiguration",
			"getScrollFriction",
			"()F"
		);
	}
	inline jint ViewConfiguration::getTapTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getTapTimeout",
			"()I"
		);
	}
	inline jint ViewConfiguration::getTouchSlop()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getTouchSlop",
			"()I"
		);
	}
	inline jint ViewConfiguration::getWindowTouchSlop()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getWindowTouchSlop",
			"()I"
		);
	}
	inline jlong ViewConfiguration::getZoomControlsTimeout()
	{
		return callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getZoomControlsTimeout",
			"()J"
		);
	}
	inline jint ViewConfiguration::getScaledDoubleTapSlop() const
	{
		return callMethod<jint>(
			"getScaledDoubleTapSlop",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledEdgeSlop() const
	{
		return callMethod<jint>(
			"getScaledEdgeSlop",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledFadingEdgeLength() const
	{
		return callMethod<jint>(
			"getScaledFadingEdgeLength",
			"()I"
		);
	}
	inline jfloat ViewConfiguration::getScaledHorizontalScrollFactor() const
	{
		return callMethod<jfloat>(
			"getScaledHorizontalScrollFactor",
			"()F"
		);
	}
	inline jint ViewConfiguration::getScaledHoverSlop() const
	{
		return callMethod<jint>(
			"getScaledHoverSlop",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledMaximumDrawingCacheSize() const
	{
		return callMethod<jint>(
			"getScaledMaximumDrawingCacheSize",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledMaximumFlingVelocity() const
	{
		return callMethod<jint>(
			"getScaledMaximumFlingVelocity",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledMinimumFlingVelocity() const
	{
		return callMethod<jint>(
			"getScaledMinimumFlingVelocity",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledOverflingDistance() const
	{
		return callMethod<jint>(
			"getScaledOverflingDistance",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledOverscrollDistance() const
	{
		return callMethod<jint>(
			"getScaledOverscrollDistance",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledPagingTouchSlop() const
	{
		return callMethod<jint>(
			"getScaledPagingTouchSlop",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledScrollBarSize() const
	{
		return callMethod<jint>(
			"getScaledScrollBarSize",
			"()I"
		);
	}
	inline jint ViewConfiguration::getScaledTouchSlop() const
	{
		return callMethod<jint>(
			"getScaledTouchSlop",
			"()I"
		);
	}
	inline jfloat ViewConfiguration::getScaledVerticalScrollFactor() const
	{
		return callMethod<jfloat>(
			"getScaledVerticalScrollFactor",
			"()F"
		);
	}
	inline jint ViewConfiguration::getScaledWindowTouchSlop() const
	{
		return callMethod<jint>(
			"getScaledWindowTouchSlop",
			"()I"
		);
	}
	inline jboolean ViewConfiguration::hasPermanentMenuKey() const
	{
		return callMethod<jboolean>(
			"hasPermanentMenuKey",
			"()Z"
		);
	}
	inline jboolean ViewConfiguration::shouldShowMenuShortcutsWhenKeyboardPresent() const
	{
		return callMethod<jboolean>(
			"shouldShowMenuShortcutsWhenKeyboardPresent",
			"()Z"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
