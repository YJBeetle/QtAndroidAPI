#include "../content/Context.hpp"
#include "./ViewConfiguration.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ViewConfiguration::ViewConfiguration(QJniObject obj) : JObject(obj) {}
	
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
	jfloat ViewConfiguration::getAmbiguousGestureMultiplier()
	{
		return callStaticMethod<jfloat>(
			"android.view.ViewConfiguration",
			"getAmbiguousGestureMultiplier",
			"()F"
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
	jint ViewConfiguration::getMultiPressTimeout()
	{
		return callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMultiPressTimeout",
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
	jfloat ViewConfiguration::getScaledAmbiguousGestureMultiplier()
	{
		return callMethod<jfloat>(
			"getScaledAmbiguousGestureMultiplier",
			"()F"
		);
	}
	jint ViewConfiguration::getScaledDoubleTapSlop()
	{
		return callMethod<jint>(
			"getScaledDoubleTapSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledEdgeSlop()
	{
		return callMethod<jint>(
			"getScaledEdgeSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledFadingEdgeLength()
	{
		return callMethod<jint>(
			"getScaledFadingEdgeLength",
			"()I"
		);
	}
	jfloat ViewConfiguration::getScaledHorizontalScrollFactor()
	{
		return callMethod<jfloat>(
			"getScaledHorizontalScrollFactor",
			"()F"
		);
	}
	jint ViewConfiguration::getScaledHoverSlop()
	{
		return callMethod<jint>(
			"getScaledHoverSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMaximumDrawingCacheSize()
	{
		return callMethod<jint>(
			"getScaledMaximumDrawingCacheSize",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMaximumFlingVelocity()
	{
		return callMethod<jint>(
			"getScaledMaximumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMinimumFlingVelocity()
	{
		return callMethod<jint>(
			"getScaledMinimumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMinimumScalingSpan()
	{
		return callMethod<jint>(
			"getScaledMinimumScalingSpan",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledOverflingDistance()
	{
		return callMethod<jint>(
			"getScaledOverflingDistance",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledOverscrollDistance()
	{
		return callMethod<jint>(
			"getScaledOverscrollDistance",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledPagingTouchSlop()
	{
		return callMethod<jint>(
			"getScaledPagingTouchSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledScrollBarSize()
	{
		return callMethod<jint>(
			"getScaledScrollBarSize",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledTouchSlop()
	{
		return callMethod<jint>(
			"getScaledTouchSlop",
			"()I"
		);
	}
	jfloat ViewConfiguration::getScaledVerticalScrollFactor()
	{
		return callMethod<jfloat>(
			"getScaledVerticalScrollFactor",
			"()F"
		);
	}
	jint ViewConfiguration::getScaledWindowTouchSlop()
	{
		return callMethod<jint>(
			"getScaledWindowTouchSlop",
			"()I"
		);
	}
	jboolean ViewConfiguration::hasPermanentMenuKey()
	{
		return callMethod<jboolean>(
			"hasPermanentMenuKey",
			"()Z"
		);
	}
	jboolean ViewConfiguration::shouldShowMenuShortcutsWhenKeyboardPresent()
	{
		return callMethod<jboolean>(
			"shouldShowMenuShortcutsWhenKeyboardPresent",
			"()Z"
		);
	}
} // namespace android::view

