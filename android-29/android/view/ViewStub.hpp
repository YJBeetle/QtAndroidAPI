#pragma once

#ifndef ANDROID_VIEW_VIEWSTUB
#define ANDROID_VIEW_VIEWSTUB

#include "View.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::view
{
	class ViewStub : public __jni_impl::android::view::View
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject inflate();
		void setLayoutResource(jint arg0);
		jint getLayoutResource();
		jint getInflatedId();
		void setInflatedId(jint arg0);
		void setLayoutInflater(__jni_impl::android::view::LayoutInflater arg0);
		void setOnInflateListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getLayoutInflater();
		void setVisibility(jint arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "View.hpp"
#include "LayoutInflater.hpp"
#include "../graphics/Canvas.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewStub::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void ViewStub::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ViewStub::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ViewStub::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ViewStub::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ViewStub::inflate()
	{
		return __thiz.callObjectMethod(
			"inflate",
			"()Landroid/view/View;");
	}
	void ViewStub::setLayoutResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutResource",
			"(I)V",
			arg0);
	}
	jint ViewStub::getLayoutResource()
	{
		return __thiz.callMethod<jint>(
			"getLayoutResource",
			"()I");
	}
	jint ViewStub::getInflatedId()
	{
		return __thiz.callMethod<jint>(
			"getInflatedId",
			"()I");
	}
	void ViewStub::setInflatedId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInflatedId",
			"(I)V",
			arg0);
	}
	void ViewStub::setLayoutInflater(__jni_impl::android::view::LayoutInflater arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutInflater",
			"(Landroid/view/LayoutInflater;)V",
			arg0.__jniObject().object());
	}
	void ViewStub::setOnInflateListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInflateListener",
			"(Landroid/view/ViewStub$OnInflateListener;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ViewStub::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;");
	}
	void ViewStub::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0);
	}
	void ViewStub::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewStub : public __jni_impl::android::view::ViewStub
	{
	public:
		ViewStub(QAndroidJniObject obj) { __thiz = obj; }
		ViewStub(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ViewStub(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ViewStub(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ViewStub(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ViewStub(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWSTUB

