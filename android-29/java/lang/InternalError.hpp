#pragma once

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "VirtualMachineError.hpp"


namespace __jni_impl::java::lang
{
	class InternalError : public __jni_impl::java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void InternalError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"()V"
		);
	}
	void InternalError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InternalError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InternalError::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void InternalError::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void InternalError::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class InternalError : public __jni_impl::java::lang::InternalError
	{
	public:
		InternalError(QAndroidJniObject obj) { __thiz = obj; }
		InternalError()
		{
			__constructor();
		}
		InternalError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InternalError(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		InternalError(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

