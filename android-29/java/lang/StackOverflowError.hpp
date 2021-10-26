#pragma once

#ifndef JAVA_LANG_STACKOVERFLOWERROR
#define JAVA_LANG_STACKOVERFLOWERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "VirtualMachineError.hpp"


namespace __jni_impl::java::lang
{
	class StackOverflowError : public __jni_impl::java::lang::VirtualMachineError
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
	void StackOverflowError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackOverflowError",
			"()V"
		);
	}
	void StackOverflowError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackOverflowError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StackOverflowError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackOverflowError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class StackOverflowError : public __jni_impl::java::lang::StackOverflowError
	{
	public:
		StackOverflowError(QAndroidJniObject obj) { __thiz = obj; }
		StackOverflowError()
		{
			__constructor();
		}
		StackOverflowError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_STACKOVERFLOWERROR

