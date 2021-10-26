#pragma once

#ifndef ANDROID_WIDGET_REMOTEVIEWS_ACTIONEXCEPTION
#define ANDROID_WIDGET_REMOTEVIEWS_ACTIONEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::android::widget
{
	class RemoteViews_ActionException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::Exception arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::widget

#include "../../java/lang/Exception.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void RemoteViews_ActionException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews$ActionException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteViews_ActionException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews$ActionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RemoteViews_ActionException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews$ActionException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class RemoteViews_ActionException : public __jni_impl::android::widget::RemoteViews_ActionException
	{
	public:
		RemoteViews_ActionException(QAndroidJniObject obj) { __thiz = obj; }
		RemoteViews_ActionException(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
		RemoteViews_ActionException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_REMOTEVIEWS_ACTIONEXCEPTION

