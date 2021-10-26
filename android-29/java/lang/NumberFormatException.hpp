#pragma once

#ifndef JAVA_LANG_NUMBERFORMATEXCEPTION
#define JAVA_LANG_NUMBERFORMATEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"
#include "IllegalArgumentException.hpp"


namespace __jni_impl::java::lang
{
	class NumberFormatException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void NumberFormatException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NumberFormatException",
			"()V"
		);
	}
	void NumberFormatException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NumberFormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NumberFormatException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NumberFormatException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class NumberFormatException : public __jni_impl::java::lang::NumberFormatException
	{
	public:
		NumberFormatException(QAndroidJniObject obj) { __thiz = obj; }
		NumberFormatException()
		{
			__constructor();
		}
		NumberFormatException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_NUMBERFORMATEXCEPTION

