#pragma once

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "ReflectiveOperationException.hpp"


namespace __jni_impl::java::lang
{
	class NoSuchMethodException : public __jni_impl::java::lang::ReflectiveOperationException
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
	void NoSuchMethodException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodException",
			"()V"
		);
	}
	void NoSuchMethodException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NoSuchMethodException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class NoSuchMethodException : public __jni_impl::java::lang::NoSuchMethodException
	{
	public:
		NoSuchMethodException(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchMethodException()
		{
			__constructor();
		}
		NoSuchMethodException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

