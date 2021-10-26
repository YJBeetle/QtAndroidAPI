#pragma once

#ifndef ANDROID_UTIL_BASE64DATAEXCEPTION
#define ANDROID_UTIL_BASE64DATAEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace __jni_impl::android::util
{
	class Base64DataException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void Base64DataException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Base64DataException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Base64DataException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Base64DataException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class Base64DataException : public __jni_impl::android::util::Base64DataException
	{
	public:
		Base64DataException(QAndroidJniObject obj) { __thiz = obj; }
		Base64DataException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_BASE64DATAEXCEPTION

