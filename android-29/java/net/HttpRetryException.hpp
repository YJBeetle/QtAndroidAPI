#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace __jni_impl::java::net
{
	class HttpRetryException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		void __constructor(jstring arg0, jint arg1, jstring arg2);
		void __constructor(const QString &arg0, jint arg1, const QString &arg2);
		
		// Methods
		jstring getLocation();
		jstring getReason();
		jint responseCode();
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void HttpRetryException::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void HttpRetryException::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void HttpRetryException::__constructor(jstring arg0, jint arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void HttpRetryException::__constructor(const QString &arg0, jint arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jstring HttpRetryException::getLocation()
	{
		return __thiz.callObjectMethod(
			"getLocation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpRetryException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint HttpRetryException::responseCode()
	{
		return __thiz.callMethod<jint>(
			"responseCode",
			"()I"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class HttpRetryException : public __jni_impl::java::net::HttpRetryException
	{
	public:
		HttpRetryException(QAndroidJniObject obj) { __thiz = obj; }
		HttpRetryException(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		HttpRetryException(jstring arg0, jint arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::net

