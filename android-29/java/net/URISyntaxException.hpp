#pragma once

#ifndef JAVA_NET_URISYNTAXEXCEPTION
#define JAVA_NET_URISYNTAXEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace __jni_impl::java::net
{
	class URISyntaxException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getMessage();
		jint getIndex();
		QAndroidJniObject getReason();
		QAndroidJniObject getInput();
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void URISyntaxException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2);
	}
	void URISyntaxException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject URISyntaxException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	jint URISyntaxException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	QAndroidJniObject URISyntaxException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URISyntaxException::getInput()
	{
		return __thiz.callObjectMethod(
			"getInput",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class URISyntaxException : public __jni_impl::java::net::URISyntaxException
	{
	public:
		URISyntaxException(QAndroidJniObject obj) { __thiz = obj; }
		URISyntaxException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		URISyntaxException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

#endif // JAVA_NET_URISYNTAXEXCEPTION

