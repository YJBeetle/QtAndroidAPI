#pragma once

#ifndef ANDROID_WIDGET_MAGNIFIER_BUILDER
#define ANDROID_WIDGET_MAGNIFIER_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::widget
{
	class Magnifier;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::widget
{
	class Magnifier_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::View arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setSize(jint arg0, jint arg1);
		QAndroidJniObject setInitialZoom(jfloat arg0);
		QAndroidJniObject setOverlay(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject setDefaultSourceToMagnifierOffset(jint arg0, jint arg1);
		QAndroidJniObject setClippingEnabled(jboolean arg0);
		QAndroidJniObject setSourceBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject setElevation(jfloat arg0);
		QAndroidJniObject setCornerRadius(jfloat arg0);
	};
} // namespace __jni_impl::android::widget

#include "../view/View.hpp"
#include "Magnifier.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Magnifier_Builder::__constructor(__jni_impl::android::view::View arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Magnifier$Builder",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Magnifier_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/widget/Magnifier;");
	}
	QAndroidJniObject Magnifier_Builder::setSize(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setSize",
			"(II)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject Magnifier_Builder::setInitialZoom(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setInitialZoom",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0);
	}
	QAndroidJniObject Magnifier_Builder::setOverlay(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callObjectMethod(
			"setOverlay",
			"(Landroid/graphics/drawable/Drawable;)Landroid/widget/Magnifier$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Magnifier_Builder::setDefaultSourceToMagnifierOffset(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setDefaultSourceToMagnifierOffset",
			"(II)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject Magnifier_Builder::setClippingEnabled(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setClippingEnabled",
			"(Z)Landroid/widget/Magnifier$Builder;",
			arg0);
	}
	QAndroidJniObject Magnifier_Builder::setSourceBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setSourceBounds",
			"(IIII)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Magnifier_Builder::setElevation(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setElevation",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0);
	}
	QAndroidJniObject Magnifier_Builder::setCornerRadius(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setCornerRadius",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Magnifier_Builder : public __jni_impl::android::widget::Magnifier_Builder
	{
	public:
		Magnifier_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Magnifier_Builder(__jni_impl::android::view::View arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_MAGNIFIER_BUILDER

