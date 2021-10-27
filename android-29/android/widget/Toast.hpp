#pragma once

#ifndef ANDROID_WIDGET_TOAST
#define ANDROID_WIDGET_TOAST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::widget
{
	class Toast : public __JniBaseClass
	{
	public:
		// Fields
		static jint LENGTH_LONG();
		static jint LENGTH_SHORT();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		static QAndroidJniObject makeText(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		static QAndroidJniObject makeText(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2);
		static QAndroidJniObject makeText(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2);
		void cancel();
		jint getDuration();
		jint getGravity();
		jfloat getHorizontalMargin();
		jfloat getVerticalMargin();
		QAndroidJniObject getView();
		jint getXOffset();
		jint getYOffset();
		void setDuration(jint arg0);
		void setGravity(jint arg0, jint arg1, jint arg2);
		void setMargin(jfloat arg0, jfloat arg1);
		void setText(jint arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
		void setView(__jni_impl::android::view::View arg0);
		void show();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint Toast::LENGTH_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.Toast",
			"LENGTH_LONG"
		);
	}
	jint Toast::LENGTH_SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.Toast",
			"LENGTH_SHORT"
		);
	}
	
	// Constructors
	void Toast::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toast",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Toast::makeText(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.Toast",
			"makeText",
			"(Landroid/content/Context;II)Landroid/widget/Toast;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Toast::makeText(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.Toast",
			"makeText",
			"(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Toast::makeText(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.Toast",
			"makeText",
			"(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void Toast::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jint Toast::getDuration()
	{
		return __thiz.callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	jint Toast::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jfloat Toast::getHorizontalMargin()
	{
		return __thiz.callMethod<jfloat>(
			"getHorizontalMargin",
			"()F"
		);
	}
	jfloat Toast::getVerticalMargin()
	{
		return __thiz.callMethod<jfloat>(
			"getVerticalMargin",
			"()F"
		);
	}
	QAndroidJniObject Toast::getView()
	{
		return __thiz.callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	jint Toast::getXOffset()
	{
		return __thiz.callMethod<jint>(
			"getXOffset",
			"()I"
		);
	}
	jint Toast::getYOffset()
	{
		return __thiz.callMethod<jint>(
			"getYOffset",
			"()I"
		);
	}
	void Toast::setDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDuration",
			"(I)V",
			arg0
		);
	}
	void Toast::setGravity(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Toast::setMargin(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setMargin",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Toast::setText(jint arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(I)V",
			arg0
		);
	}
	void Toast::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toast::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Toast::setView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void Toast::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Toast : public __jni_impl::android::widget::Toast
	{
	public:
		Toast(QAndroidJniObject obj) { __thiz = obj; }
		Toast(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TOAST

