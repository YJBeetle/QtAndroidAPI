#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace __jni_impl::java::net
{
	class URISyntaxException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2);
		
		// Methods
		jint getIndex();
		jstring getInput();
		jstring getMessage();
		jstring getReason();
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void URISyntaxException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void URISyntaxException::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void URISyntaxException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void URISyntaxException::__constructor(const QString &arg0, const QString &arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	jint URISyntaxException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring URISyntaxException::getInput()
	{
		return __thiz.callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URISyntaxException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URISyntaxException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class URISyntaxException : public __jni_impl::java::net::URISyntaxException
	{
	public:
		URISyntaxException(QAndroidJniObject obj) { __thiz = obj; }
		URISyntaxException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		URISyntaxException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::net

