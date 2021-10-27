#pragma once

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"


namespace __jni_impl::java::lang
{
	class VirtualMachineError : public __jni_impl::java::lang::Error
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
	void VirtualMachineError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"()V"
		);
	}
	void VirtualMachineError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void VirtualMachineError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void VirtualMachineError::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void VirtualMachineError::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void VirtualMachineError::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class VirtualMachineError : public __jni_impl::java::lang::VirtualMachineError
	{
	public:
		VirtualMachineError(QAndroidJniObject obj) { __thiz = obj; }
		VirtualMachineError()
		{
			__constructor();
		}
		VirtualMachineError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		VirtualMachineError(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		VirtualMachineError(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

