#pragma once

#ifndef ANDROID_UTIL_NOSUCHPROPERTYEXCEPTION
#define ANDROID_UTIL_NOSUCHPROPERTYEXCEPTION

#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::util
{
	class NoSuchPropertyException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void NoSuchPropertyException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.NoSuchPropertyException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class NoSuchPropertyException : public __jni_impl::android::util::NoSuchPropertyException
	{
	public:
		NoSuchPropertyException(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchPropertyException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_NOSUCHPROPERTYEXCEPTION

