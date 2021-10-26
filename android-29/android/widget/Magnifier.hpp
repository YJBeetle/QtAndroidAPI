#pragma once

#ifndef ANDROID_WIDGET_MAGNIFIER
#define ANDROID_WIDGET_MAGNIFIER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics
{
	class Point;
}

namespace __jni_impl::android::widget
{
	class Magnifier : public __JniBaseClass
	{
	public:
		// Fields
		static jint SOURCE_BOUND_MAX_IN_SURFACE();
		static jint SOURCE_BOUND_MAX_VISIBLE();
		
		// Constructors
		void __constructor(__jni_impl::android::view::View arg0);
		
		// Methods
		void update();
		QAndroidJniObject getOverlay();
		jfloat getElevation();
		jfloat getZoom();
		jint getWidth();
		jint getHeight();
		jfloat getCornerRadius();
		void setZoom(jfloat arg0);
		void show(jfloat arg0, jfloat arg1);
		void show(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void dismiss();
		jint getSourceWidth();
		jint getSourceHeight();
		jint getDefaultHorizontalSourceToMagnifierOffset();
		jint getDefaultVerticalSourceToMagnifierOffset();
		jboolean isClippingEnabled();
		QAndroidJniObject getSourcePosition();
		QAndroidJniObject getPosition();
	};
} // namespace __jni_impl::android::widget

#include "../view/View.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../graphics/Point.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint Magnifier::SOURCE_BOUND_MAX_IN_SURFACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.Magnifier",
			"SOURCE_BOUND_MAX_IN_SURFACE"
		);
	}
	jint Magnifier::SOURCE_BOUND_MAX_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.Magnifier",
			"SOURCE_BOUND_MAX_VISIBLE"
		);
	}
	
	// Constructors
	void Magnifier::__constructor(__jni_impl::android::view::View arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Magnifier",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Magnifier::update()
	{
		__thiz.callMethod<void>(
			"update",
			"()V"
		);
	}
	QAndroidJniObject Magnifier::getOverlay()
	{
		return __thiz.callObjectMethod(
			"getOverlay",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jfloat Magnifier::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jfloat Magnifier::getZoom()
	{
		return __thiz.callMethod<jfloat>(
			"getZoom",
			"()F"
		);
	}
	jint Magnifier::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint Magnifier::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jfloat Magnifier::getCornerRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getCornerRadius",
			"()F"
		);
	}
	void Magnifier::setZoom(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	void Magnifier::show(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"show",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Magnifier::show(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"show",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Magnifier::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jint Magnifier::getSourceWidth()
	{
		return __thiz.callMethod<jint>(
			"getSourceWidth",
			"()I"
		);
	}
	jint Magnifier::getSourceHeight()
	{
		return __thiz.callMethod<jint>(
			"getSourceHeight",
			"()I"
		);
	}
	jint Magnifier::getDefaultHorizontalSourceToMagnifierOffset()
	{
		return __thiz.callMethod<jint>(
			"getDefaultHorizontalSourceToMagnifierOffset",
			"()I"
		);
	}
	jint Magnifier::getDefaultVerticalSourceToMagnifierOffset()
	{
		return __thiz.callMethod<jint>(
			"getDefaultVerticalSourceToMagnifierOffset",
			"()I"
		);
	}
	jboolean Magnifier::isClippingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isClippingEnabled",
			"()Z"
		);
	}
	QAndroidJniObject Magnifier::getSourcePosition()
	{
		return __thiz.callObjectMethod(
			"getSourcePosition",
			"()Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Magnifier::getPosition()
	{
		return __thiz.callObjectMethod(
			"getPosition",
			"()Landroid/graphics/Point;"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Magnifier : public __jni_impl::android::widget::Magnifier
	{
	public:
		Magnifier(QAndroidJniObject obj) { __thiz = obj; }
		Magnifier(__jni_impl::android::view::View arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_MAGNIFIER

