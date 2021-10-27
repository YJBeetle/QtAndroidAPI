#pragma once

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class IllegalMonitorStateException : public __jni_impl::java::lang::RuntimeException
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
	void IllegalMonitorStateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalMonitorStateException",
			"()V"
		);
	}
	void IllegalMonitorStateException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalMonitorStateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IllegalMonitorStateException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalMonitorStateException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class IllegalMonitorStateException : public __jni_impl::java::lang::IllegalMonitorStateException
	{
	public:
		IllegalMonitorStateException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalMonitorStateException()
		{
			__constructor();
		}
		IllegalMonitorStateException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

