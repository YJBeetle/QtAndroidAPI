#pragma once

#ifndef ANDROID_UTIL_MALFORMEDJSONEXCEPTION
#define ANDROID_UTIL_MALFORMEDJSONEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace __jni_impl::android::util
{
	class MalformedJsonException : public __jni_impl::java::io::IOException
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
	void MalformedJsonException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MalformedJsonException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MalformedJsonException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MalformedJsonException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class MalformedJsonException : public __jni_impl::android::util::MalformedJsonException
	{
	public:
		MalformedJsonException(QAndroidJniObject obj) { __thiz = obj; }
		MalformedJsonException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_MALFORMEDJSONEXCEPTION

