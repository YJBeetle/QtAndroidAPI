#pragma once

#ifndef ANDROID_WIDGET_IMAGESWITCHER
#define ANDROID_WIDGET_IMAGESWITCHER

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "FrameLayout.hpp"
#include "ViewAnimator.hpp"
#include "ViewSwitcher.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::widget
{
	class ImageSwitcher : public __jni_impl::android::widget::ViewSwitcher
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getAccessibilityClassName();
		void setImageResource(jint arg0);
		void setImageURI(__jni_impl::android::net::Uri arg0);
		void setImageDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ImageSwitcher::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageSwitcher",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void ImageSwitcher::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ImageSwitcher::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void ImageSwitcher::setImageResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImageResource",
			"(I)V",
			arg0);
	}
	void ImageSwitcher::setImageURI(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setImageURI",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
	void ImageSwitcher::setImageDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setImageDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ImageSwitcher : public __jni_impl::android::widget::ImageSwitcher
	{
	public:
		ImageSwitcher(QAndroidJniObject obj) { __thiz = obj; }
		ImageSwitcher(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ImageSwitcher(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_IMAGESWITCHER

