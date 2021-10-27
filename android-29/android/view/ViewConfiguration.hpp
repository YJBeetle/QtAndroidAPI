#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view
{
	class ViewConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject get(__jni_impl::android::content::Context arg0);
		static jfloat getAmbiguousGestureMultiplier();
		static jlong getDefaultActionModeHideDuration();
		static jint getDoubleTapTimeout();
		static jint getEdgeSlop();
		static jint getFadingEdgeLength();
		static jlong getGlobalActionKeyTimeout();
		static jint getJumpTapTimeout();
		static jint getKeyRepeatDelay();
		static jint getKeyRepeatTimeout();
		static jint getLongPressTimeout();
		static jint getMaximumDrawingCacheSize();
		static jint getMaximumFlingVelocity();
		static jint getMinimumFlingVelocity();
		static jint getPressedStateDuration();
		static jint getScrollBarFadeDuration();
		static jint getScrollBarSize();
		static jint getScrollDefaultDelay();
		static jfloat getScrollFriction();
		static jint getTapTimeout();
		static jint getTouchSlop();
		static jint getWindowTouchSlop();
		static jlong getZoomControlsTimeout();
		jint getScaledDoubleTapSlop();
		jint getScaledEdgeSlop();
		jint getScaledFadingEdgeLength();
		jfloat getScaledHorizontalScrollFactor();
		jint getScaledHoverSlop();
		jint getScaledMaximumDrawingCacheSize();
		jint getScaledMaximumFlingVelocity();
		jint getScaledMinimumFlingVelocity();
		jint getScaledMinimumScalingSpan();
		jint getScaledOverflingDistance();
		jint getScaledOverscrollDistance();
		jint getScaledPagingTouchSlop();
		jint getScaledScrollBarSize();
		jint getScaledTouchSlop();
		jfloat getScaledVerticalScrollFactor();
		jint getScaledWindowTouchSlop();
		jboolean hasPermanentMenuKey();
		jboolean shouldShowMenuShortcutsWhenKeyboardPresent();
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewConfiguration",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ViewConfiguration::get(__jni_impl::android::content::Context arg0)
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
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewConfiguration : public __jni_impl::android::view::ViewConfiguration
	{
	public:
		ViewConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		ViewConfiguration()
		{
			__constructor();
		}
	};
} // namespace android::view

