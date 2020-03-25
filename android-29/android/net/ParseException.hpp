#pragma once

#ifndef ANDROID_NET_PARSEEXCEPTION
#define ANDROID_NET_PARSEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::net
{
	class ParseException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		QAndroidJniObject response();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject ParseException::response()
	{
		return __thiz.getObjectField(
			"response",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ParseException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.ParseException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net

namespace android::net
{
	class ParseException : public __jni_impl::android::net::ParseException
	{
	public:
		ParseException(QAndroidJniObject obj) { __thiz = obj; }
		ParseException()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_PARSEEXCEPTION

