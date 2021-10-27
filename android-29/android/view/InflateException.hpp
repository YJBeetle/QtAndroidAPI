#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::view
{
	class InflateException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void InflateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"()V"
		);
	}
	void InflateException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InflateException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InflateException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void InflateException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void InflateException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class InflateException : public __jni_impl::android::view::InflateException
	{
	public:
		InflateException(QAndroidJniObject obj) { __thiz = obj; }
		InflateException()
		{
			__constructor();
		}
		InflateException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InflateException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		InflateException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view

