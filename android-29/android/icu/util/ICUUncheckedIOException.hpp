#pragma once

#ifndef ANDROID_ICU_UTIL_ICUUNCHECKEDIOEXCEPTION
#define ANDROID_ICU_UTIL_ICUUNCHECKEDIOEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::icu::util
{
	class ICUUncheckedIOException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	
	// Constructors
	void ICUUncheckedIOException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void ICUUncheckedIOException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void ICUUncheckedIOException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ICUUncheckedIOException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ICUUncheckedIOException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ICUUncheckedIOException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class ICUUncheckedIOException : public __jni_impl::android::icu::util::ICUUncheckedIOException
	{
	public:
		ICUUncheckedIOException(QAndroidJniObject obj) { __thiz = obj; }
		ICUUncheckedIOException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ICUUncheckedIOException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		ICUUncheckedIOException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ICUUncheckedIOException()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_ICUUNCHECKEDIOEXCEPTION

