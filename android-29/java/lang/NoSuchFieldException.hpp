#pragma once

#ifndef JAVA_LANG_NOSUCHFIELDEXCEPTION
#define JAVA_LANG_NOSUCHFIELDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "ReflectiveOperationException.hpp"


namespace __jni_impl::java::lang
{
	class NoSuchFieldException : public __jni_impl::java::lang::ReflectiveOperationException
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
	void NoSuchFieldException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldException",
			"()V"
		);
	}
	void NoSuchFieldException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NoSuchFieldException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class NoSuchFieldException : public __jni_impl::java::lang::NoSuchFieldException
	{
	public:
		NoSuchFieldException(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchFieldException()
		{
			__constructor();
		}
		NoSuchFieldException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_NOSUCHFIELDEXCEPTION

