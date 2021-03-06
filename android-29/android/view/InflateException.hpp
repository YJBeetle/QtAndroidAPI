#pragma once

#ifndef ANDROID_VIEW_INFLATEEXCEPTION
#define ANDROID_VIEW_INFLATEEXCEPTION

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
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void InflateException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void InflateException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void InflateException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void InflateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class InflateException : public __jni_impl::android::view::InflateException
	{
	public:
		InflateException(QAndroidJniObject obj) { __thiz = obj; }
		InflateException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		InflateException(jstring arg0)
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
		InflateException()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_INFLATEEXCEPTION

