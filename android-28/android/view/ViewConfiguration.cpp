#include "../content/Context.hpp"
#include "./ViewConfiguration.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	ViewConfiguration::ViewConfiguration()
		: JObject(
			"android.view.ViewConfiguration",
			"()V"
		) {}
	
	// Methods
	android::view::ViewConfiguration ViewConfiguration::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.view.ViewConfiguration",
			"get",
			"(Landroid/content/Context;)Landroid/view/ViewConfiguration;",
			arg0.object()
		);
	}
	jlong ViewConfiguration::getDefaultActionModeHideDuration()
	{
		return callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getDefaultActionModeHideDuration",
			"()J"
		);
	}
	jint ViewConfiguration::getDoubleTapTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getDoubleTapTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getEdgeSlop()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getEdgeSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getFadingEdgeLength()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getFadingEdgeLength",
			"()I"
		);
	}
	jlong ViewConfiguration::getGlobalActionKeyTimeout()
	{
		return callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getGlobalActionKeyTimeout",
			"()J"
		);
	}
	jint ViewConfiguration::getJumpTapTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getJumpTapTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getKeyRepeatDelay()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getKeyRepeatDelay",
			"()I"
		);
	}
	jint ViewConfiguration::getKeyRepeatTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getKeyRepeatTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getLongPressTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getLongPressTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getMaximumDrawingCacheSize()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMaximumDrawingCacheSize",
			"()I"
		);
	}
	jint ViewConfiguration::getMaximumFlingVelocity()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMaximumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getMinimumFlingVelocity()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMinimumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getPressedStateDuration()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getPressedStateDuration",
			"()I"
		);
	}
	jint ViewConfiguration::getScrollBarFadeDuration()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollBarFadeDuration",
			"()I"
		);
	}
	jint ViewConfiguration::getScrollBarSize()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollBarSize",
			"()I"
		);
	}
	jint ViewConfiguration::getScrollDefaultDelay()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollDefaultDelay",
			"()I"
		);
	}
	jfloat ViewConfiguration::getScrollFriction()
	{
		return callStaticMethod<jfloat>(
			"android.view.ViewConfiguration",
			"getScrollFriction",
			"()F"
		);
	}
	jint ViewConfiguration::getTapTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getTapTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getTouchSlop()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getTouchSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getWindowTouchSlop()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getWindowTouchSlop",
			"()I"
		);
	}
	jlong ViewConfiguration::getZoomControlsTimeout()
	{
		return callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getZoomControlsTimeout",
			"()J"
		);
	}
	jint ViewConfiguration::getScaledDoubleTapSlop() const
	{
		return callMethod<jint>(
			"getScaledDoubleTapSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledEdgeSlop() const
	{
		return callMethod<jint>(
			"getScaledEdgeSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledFadingEdgeLength() const
	{
		return callMethod<jint>(
			"getScaledFadingEdgeLength",
			"()I"
		);
	}
	jfloat ViewConfiguration::getScaledHorizontalScrollFactor() const
	{
		return callMethod<jfloat>(
			"getScaledHorizontalScrollFactor",
			"()F"
		);
	}
	jint ViewConfiguration::getScaledHoverSlop() const
	{
		return callMethod<jint>(
			"getScaledHoverSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMaximumDrawingCacheSize() const
	{
		return callMethod<jint>(
			"getScaledMaximumDrawingCacheSize",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMaximumFlingVelocity() const
	{
		return callMethod<jint>(
			"getScaledMaximumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMinimumFlingVelocity() const
	{
		return callMethod<jint>(
			"getScaledMinimumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledOverflingDistance() const
	{
		return callMethod<jint>(
			"getScaledOverflingDistance",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledOverscrollDistance() const
	{
		return callMethod<jint>(
			"getScaledOverscrollDistance",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledPagingTouchSlop() const
	{
		return callMethod<jint>(
			"getScaledPagingTouchSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledScrollBarSize() const
	{
		return callMethod<jint>(
			"getScaledScrollBarSize",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledTouchSlop() const
	{
		return callMethod<jint>(
			"getScaledTouchSlop",
			"()I"
		);
	}
	jfloat ViewConfiguration::getScaledVerticalScrollFactor() const
	{
		return callMethod<jfloat>(
			"getScaledVerticalScrollFactor",
			"()F"
		);
	}
	jint ViewConfiguration::getScaledWindowTouchSlop() const
	{
		return callMethod<jint>(
			"getScaledWindowTouchSlop",
			"()I"
		);
	}
	jboolean ViewConfiguration::hasPermanentMenuKey() const
	{
		return callMethod<jboolean>(
			"hasPermanentMenuKey",
			"()Z"
		);
	}
	jboolean ViewConfiguration::shouldShowMenuShortcutsWhenKeyboardPresent() const
	{
		return callMethod<jboolean>(
			"shouldShowMenuShortcutsWhenKeyboardPresent",
			"()Z"
		);
	}
} // namespace android::view

