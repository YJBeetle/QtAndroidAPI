#pragma once

#ifndef ANDROID_VIEW_VIEWCONFIGURATION
#define ANDROID_VIEW_VIEWCONFIGURATION

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
		jint getScaledScrollBarSize();
		static jint getScrollDefaultDelay();
		static jint getFadingEdgeLength();
		jint getScaledFadingEdgeLength();
		static jint getPressedStateDuration();
		static jint getLongPressTimeout();
		static jint getKeyRepeatTimeout();
		static jint getKeyRepeatDelay();
		static jint getTapTimeout();
		static jint getJumpTapTimeout();
		static jint getDoubleTapTimeout();
		static jint getEdgeSlop();
		jint getScaledEdgeSlop();
		static jint getTouchSlop();
		jint getScaledTouchSlop();
		jint getScaledHoverSlop();
		jint getScaledPagingTouchSlop();
		jint getScaledDoubleTapSlop();
		static jint getWindowTouchSlop();
		jint getScaledWindowTouchSlop();
		static jint getMinimumFlingVelocity();
		jint getScaledMinimumFlingVelocity();
		static jint getMaximumFlingVelocity();
		jint getScaledMaximumFlingVelocity();
		jfloat getScaledHorizontalScrollFactor();
		jfloat getScaledVerticalScrollFactor();
		static jint getMaximumDrawingCacheSize();
		jint getScaledMaximumDrawingCacheSize();
		jint getScaledOverscrollDistance();
		jint getScaledOverflingDistance();
		static jlong getZoomControlsTimeout();
		static jlong getGlobalActionKeyTimeout();
		static jfloat getScrollFriction();
		static jlong getDefaultActionModeHideDuration();
		static jfloat getAmbiguousGestureMultiplier();
		jboolean hasPermanentMenuKey();
		jboolean shouldShowMenuShortcutsWhenKeyboardPresent();
		jint getScaledMinimumScalingSpan();
		static jint getScrollBarFadeDuration();
		static jint getScrollBarSize();
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
			"()V");
	}
	
	// Methods
	QAndroidJniObject ViewConfiguration::get(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewConfiguration",
			"get",
			"(Landroid/content/Context;)Landroid/view/ViewConfiguration;",
			arg0.__jniObject().object());
	}
	jint ViewConfiguration::getScaledScrollBarSize()
	{
		return __thiz.callMethod<jint>(
			"getScaledScrollBarSize",
			"()I");
	}
	jint ViewConfiguration::getScrollDefaultDelay()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollDefaultDelay",
			"()I");
	}
	jint ViewConfiguration::getFadingEdgeLength()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getFadingEdgeLength",
			"()I");
	}
	jint ViewConfiguration::getScaledFadingEdgeLength()
	{
		return __thiz.callMethod<jint>(
			"getScaledFadingEdgeLength",
			"()I");
	}
	jint ViewConfiguration::getPressedStateDuration()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getPressedStateDuration",
			"()I");
	}
	jint ViewConfiguration::getLongPressTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getLongPressTimeout",
			"()I");
	}
	jint ViewConfiguration::getKeyRepeatTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getKeyRepeatTimeout",
			"()I");
	}
	jint ViewConfiguration::getKeyRepeatDelay()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getKeyRepeatDelay",
			"()I");
	}
	jint ViewConfiguration::getTapTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getTapTimeout",
			"()I");
	}
	jint ViewConfiguration::getJumpTapTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getJumpTapTimeout",
			"()I");
	}
	jint ViewConfiguration::getDoubleTapTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getDoubleTapTimeout",
			"()I");
	}
	jint ViewConfiguration::getEdgeSlop()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getEdgeSlop",
			"()I");
	}
	jint ViewConfiguration::getScaledEdgeSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledEdgeSlop",
			"()I");
	}
	jint ViewConfiguration::getTouchSlop()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getTouchSlop",
			"()I");
	}
	jint ViewConfiguration::getScaledTouchSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledTouchSlop",
			"()I");
	}
	jint ViewConfiguration::getScaledHoverSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledHoverSlop",
			"()I");
	}
	jint ViewConfiguration::getScaledPagingTouchSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledPagingTouchSlop",
			"()I");
	}
	jint ViewConfiguration::getScaledDoubleTapSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledDoubleTapSlop",
			"()I");
	}
	jint ViewConfiguration::getWindowTouchSlop()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getWindowTouchSlop",
			"()I");
	}
	jint ViewConfiguration::getScaledWindowTouchSlop()
	{
		return __thiz.callMethod<jint>(
			"getScaledWindowTouchSlop",
			"()I");
	}
	jint ViewConfiguration::getMinimumFlingVelocity()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMinimumFlingVelocity",
			"()I");
	}
	jint ViewConfiguration::getScaledMinimumFlingVelocity()
	{
		return __thiz.callMethod<jint>(
			"getScaledMinimumFlingVelocity",
			"()I");
	}
	jint ViewConfiguration::getMaximumFlingVelocity()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMaximumFlingVelocity",
			"()I");
	}
	jint ViewConfiguration::getScaledMaximumFlingVelocity()
	{
		return __thiz.callMethod<jint>(
			"getScaledMaximumFlingVelocity",
			"()I");
	}
	jfloat ViewConfiguration::getScaledHorizontalScrollFactor()
	{
		return __thiz.callMethod<jfloat>(
			"getScaledHorizontalScrollFactor",
			"()F");
	}
	jfloat ViewConfiguration::getScaledVerticalScrollFactor()
	{
		return __thiz.callMethod<jfloat>(
			"getScaledVerticalScrollFactor",
			"()F");
	}
	jint ViewConfiguration::getMaximumDrawingCacheSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getMaximumDrawingCacheSize",
			"()I");
	}
	jint ViewConfiguration::getScaledMaximumDrawingCacheSize()
	{
		return __thiz.callMethod<jint>(
			"getScaledMaximumDrawingCacheSize",
			"()I");
	}
	jint ViewConfiguration::getScaledOverscrollDistance()
	{
		return __thiz.callMethod<jint>(
			"getScaledOverscrollDistance",
			"()I");
	}
	jint ViewConfiguration::getScaledOverflingDistance()
	{
		return __thiz.callMethod<jint>(
			"getScaledOverflingDistance",
			"()I");
	}
	jlong ViewConfiguration::getZoomControlsTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getZoomControlsTimeout",
			"()J");
	}
	jlong ViewConfiguration::getGlobalActionKeyTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getGlobalActionKeyTimeout",
			"()J");
	}
	jfloat ViewConfiguration::getScrollFriction()
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.view.ViewConfiguration",
			"getScrollFriction",
			"()F");
	}
	jlong ViewConfiguration::getDefaultActionModeHideDuration()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.view.ViewConfiguration",
			"getDefaultActionModeHideDuration",
			"()J");
	}
	jfloat ViewConfiguration::getAmbiguousGestureMultiplier()
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.view.ViewConfiguration",
			"getAmbiguousGestureMultiplier",
			"()F");
	}
	jboolean ViewConfiguration::hasPermanentMenuKey()
	{
		return __thiz.callMethod<jboolean>(
			"hasPermanentMenuKey",
			"()Z");
	}
	jboolean ViewConfiguration::shouldShowMenuShortcutsWhenKeyboardPresent()
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowMenuShortcutsWhenKeyboardPresent",
			"()Z");
	}
	jint ViewConfiguration::getScaledMinimumScalingSpan()
	{
		return __thiz.callMethod<jint>(
			"getScaledMinimumScalingSpan",
			"()I");
	}
	jint ViewConfiguration::getScrollBarFadeDuration()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollBarFadeDuration",
			"()I");
	}
	jint ViewConfiguration::getScrollBarSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewConfiguration",
			"getScrollBarSize",
			"()I");
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

#endif // ANDROID_VIEW_VIEWCONFIGURATION

