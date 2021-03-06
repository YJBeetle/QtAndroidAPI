#pragma once

#ifndef JAVA_LANG_INTERNALERROR
#define JAVA_LANG_INTERNALERROR

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
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void InternalError::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void InternalError::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void InternalError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void InternalError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InternalError",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class InternalError : public __jni_impl::java::lang::InternalError
	{
	public:
		InternalError(QAndroidJniObject obj) { __thiz = obj; }
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
		InternalError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InternalError()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_INTERNALERROR

