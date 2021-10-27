#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class View;
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
		void dismiss();
		jfloat getCornerRadius();
		jint getDefaultHorizontalSourceToMagnifierOffset();
		jint getDefaultVerticalSourceToMagnifierOffset();
		jfloat getElevation();
		jint getHeight();
		QAndroidJniObject getOverlay();
		QAndroidJniObject getPosition();
		jint getSourceHeight();
		QAndroidJniObject getSourcePosition();
		jint getSourceWidth();
		jint getWidth();
		jfloat getZoom();
		jboolean isClippingEnabled();
		void setZoom(jfloat arg0);
		void show(jfloat arg0, jfloat arg1);
		void show(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void update();
	};
} // namespace __jni_impl::android::widget

#include "../graphics/Point.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"

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
	void Magnifier::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jfloat Magnifier::getCornerRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getCornerRadius",
			"()F"
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
	jfloat Magnifier::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint Magnifier::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	QAndroidJniObject Magnifier::getOverlay()
	{
		return __thiz.callObjectMethod(
			"getOverlay",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Magnifier::getPosition()
	{
		return __thiz.callObjectMethod(
			"getPosition",
			"()Landroid/graphics/Point;"
		);
	}
	jint Magnifier::getSourceHeight()
	{
		return __thiz.callMethod<jint>(
			"getSourceHeight",
			"()I"
		);
	}
	QAndroidJniObject Magnifier::getSourcePosition()
	{
		return __thiz.callObjectMethod(
			"getSourcePosition",
			"()Landroid/graphics/Point;"
		);
	}
	jint Magnifier::getSourceWidth()
	{
		return __thiz.callMethod<jint>(
			"getSourceWidth",
			"()I"
		);
	}
	jint Magnifier::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jfloat Magnifier::getZoom()
	{
		return __thiz.callMethod<jfloat>(
			"getZoom",
			"()F"
		);
	}
	jboolean Magnifier::isClippingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isClippingEnabled",
			"()Z"
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
	void Magnifier::update()
	{
		__thiz.callMethod<void>(
			"update",
			"()V"
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

