#pragma once

#ifndef JAVA_LANG_OUTOFMEMORYERROR
#define JAVA_LANG_OUTOFMEMORYERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "VirtualMachineError.hpp"


namespace __jni_impl::java::lang
{
	class OutOfMemoryError : public __jni_impl::java::lang::VirtualMachineError
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
	void OutOfMemoryError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.OutOfMemoryError",
			"()V"
		);
	}
	void OutOfMemoryError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.OutOfMemoryError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void OutOfMemoryError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.OutOfMemoryError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class OutOfMemoryError : public __jni_impl::java::lang::OutOfMemoryError
	{
	public:
		OutOfMemoryError(QAndroidJniObject obj) { __thiz = obj; }
		OutOfMemoryError()
		{
			__constructor();
		}
		OutOfMemoryError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_OUTOFMEMORYERROR

