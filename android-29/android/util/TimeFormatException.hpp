#pragma once

#ifndef ANDROID_UTIL_TIMEFORMATEXCEPTION
#define ANDROID_UTIL_TIMEFORMATEXCEPTION

#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::util
{
	class TimeFormatException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void TimeFormatException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.TimeFormatException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class TimeFormatException : public __jni_impl::android::util::TimeFormatException
	{
	public:
		TimeFormatException(QAndroidJniObject obj) { __thiz = obj; }
		TimeFormatException()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_TIMEFORMATEXCEPTION

