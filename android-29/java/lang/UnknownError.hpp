#pragma once

#ifndef JAVA_LANG_UNKNOWNERROR
#define JAVA_LANG_UNKNOWNERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "VirtualMachineError.hpp"


namespace __jni_impl::java::lang
{
	class UnknownError : public __jni_impl::java::lang::VirtualMachineError
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
	void UnknownError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnknownError",
			"()V"
		);
	}
	void UnknownError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnknownError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UnknownError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnknownError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class UnknownError : public __jni_impl::java::lang::UnknownError
	{
	public:
		UnknownError(QAndroidJniObject obj) { __thiz = obj; }
		UnknownError()
		{
			__constructor();
		}
		UnknownError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_UNKNOWNERROR

