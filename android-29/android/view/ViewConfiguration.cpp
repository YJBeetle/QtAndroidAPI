#include "../content/Context.hpp"
#include "./ViewConfiguration.hpp"

namespace android::view
{
	// Fields
	
	ViewConfiguration::ViewConfiguration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewConfiguration::ViewConfiguration()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewConfiguration",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ViewConfiguration::get(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewConfiguration",
			"get",
			"(Landroid/content/Context;)Landroid/view/ViewConfiguration;",
			arg0.__jniObject().object()
		);
	}
	jfloat ViewConfiguration::getAmbiguousGestureMultiplier()
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.view.ViewConfiguration",
			"getAmbiguousGestureMultiplier",
			"()F"
		);
	}
	jlong ViewConfiguration::getDefaultActionModeHideDuration()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getDefaultActionModeHideDuration",
			"()J"
		);
	}
	jint ViewConfiguration::getDoubleTapTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getDoubleTapTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getEdgeSlop()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getEdgeSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getFadingEdgeLength()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getFadingEdgeLength",
			"()I"
		);
	}
	jlong ViewConfiguration::getGlobalActionKeyTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getGlobalActionKeyTimeout",
			"()J"
		);
	}
	jint ViewConfiguration::getJumpTapTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getJumpTapTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getKeyRepeatDelay()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getKeyRepeatDelay",
			"()I"
		);
	}
	jint ViewConfiguration::getKeyRepeatTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getKeyRepeatTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getLongPressTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getLongPressTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getMaximumDrawingCacheSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMaximumDrawingCacheSize",
			"()I"
		);
	}
	jint ViewConfiguration::getMaximumFlingVelocity()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMaximumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getMinimumFlingVelocity()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMinimumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getPressedStateDuration()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getPressedStateDuration",
			"()I"
		);
	}
	jint ViewConfiguration::getScrollBarFadeDuration()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollBarFadeDuration",
			"()I"
		);
	}
	jint ViewConfiguration::getScrollBarSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollBarSize",
			"()I"
		);
	}
	jint ViewConfiguration::getScrollDefaultDelay()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollDefaultDelay",
			"()I"
		);
	}
	jfloat ViewConfiguration::getScrollFriction()
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.view.ViewConfiguration",
			"getScrollFriction",
			"()F"
		);
	}
	jint ViewConfiguration::getTapTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getTapTimeout",
			"()I"
		);
	}
	jint ViewConfiguration::getTouchSlop()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getTouchSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getWindowTouchSlop()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getWindowTouchSlop",
			"()I"
		);
	}
	jlong ViewConfiguration::getZoomControlsTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getZoomControlsTimeout",
			"()J"
		);
	}
	jint ViewConfiguration::getScaledDoubleTapSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledDoubleTapSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledEdgeSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledEdgeSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledFadingEdgeLength()
	{
		return __thiz.callMethod<jint>(
			"getScaledFadingEdgeLength",
			"()I"
		);
	}
	jfloat ViewConfiguration::getScaledHorizontalScrollFactor()
	{
		return __thiz.callMethod<jfloat>(
			"getScaledHorizontalScrollFactor",
			"()F"
		);
	}
	jint ViewConfiguration::getScaledHoverSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledHoverSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMaximumDrawingCacheSize()
	{
		return __thiz.callMethod<jint>(
			"getScaledMaximumDrawingCacheSize",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMaximumFlingVelocity()
	{
		return __thiz.callMethod<jint>(
			"getScaledMaximumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMinimumFlingVelocity()
	{
		return __thiz.callMethod<jint>(
			"getScaledMinimumFlingVelocity",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledMinimumScalingSpan()
	{
		return __thiz.callMethod<jint>(
			"getScaledMinimumScalingSpan",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledOverflingDistance()
	{
		return __thiz.callMethod<jint>(
			"getScaledOverflingDistance",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledOverscrollDistance()
	{
		return __thiz.callMethod<jint>(
			"getScaledOverscrollDistance",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledPagingTouchSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledPagingTouchSlop",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledScrollBarSize()
	{
		return __thiz.callMethod<jint>(
			"getScaledScrollBarSize",
			"()I"
		);
	}
	jint ViewConfiguration::getScaledTouchSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledTouchSlop",
			"()I"
		);
	}
	jfloat ViewConfiguration::getScaledVerticalScrollFactor()
	{
		return __thiz.callMethod<jfloat>(
			"getScaledVerticalScrollFactor",
			"()F"
		);
	}
	jint ViewConfiguration::getScaledWindowTouchSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledWindowTouchSlop",
			"()I"
		);
	}
	jboolean ViewConfiguration::hasPermanentMenuKey()
	{
		return __thiz.callMethod<jboolean>(
			"hasPermanentMenuKey",
			"()Z"
		);
	}
	jboolean ViewConfiguration::shouldShowMenuShortcutsWhenKeyboardPresent()
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowMenuShortcutsWhenKeyboardPresent",
			"()Z"
		);
	}
} // namespace android::view

