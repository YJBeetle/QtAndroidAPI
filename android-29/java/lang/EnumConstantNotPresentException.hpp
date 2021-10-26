#pragma once

#ifndef JAVA_LANG_ENUMCONSTANTNOTPRESENTEXCEPTION
#define JAVA_LANG_ENUMCONSTANTNOTPRESENTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class EnumConstantNotPresentException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jclass arg0, jstring arg1);
		void __constructor(jclass arg0, const QString &arg1);
		
		// Methods
		jclass enumType();
		jstring constantName();
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void EnumConstantNotPresentException::__constructor(jclass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.EnumConstantNotPresentException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void EnumConstantNotPresentException::__constructor(jclass arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.EnumConstantNotPresentException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jclass EnumConstantNotPresentException::enumType()
	{
		return __thiz.callObjectMethod(
			"enumType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jstring EnumConstantNotPresentException::constantName()
	{
		return __thiz.callObjectMethod(
			"constantName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class EnumConstantNotPresentException : public __jni_impl::java::lang::EnumConstantNotPresentException
	{
	public:
		EnumConstantNotPresentException(QAndroidJniObject obj) { __thiz = obj; }
		EnumConstantNotPresentException(jclass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ENUMCONSTANTNOTPRESENTEXCEPTION

