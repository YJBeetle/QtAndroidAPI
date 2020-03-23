#pragma once

#ifndef JAVA_LANG_UNSATISFIEDLINKERROR
#define JAVA_LANG_UNSATISFIEDLINKERROR

#include "LinkageError.hpp"


namespace __jni_impl::java::lang
{
	class UnsatisfiedLinkError : public __jni_impl::java::lang::LinkageError
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void UnsatisfiedLinkError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsatisfiedLinkError",
			"()V");
	}
	void UnsatisfiedLinkError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsatisfiedLinkError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class UnsatisfiedLinkError : public __jni_impl::java::lang::UnsatisfiedLinkError
	{
	public:
		UnsatisfiedLinkError(QAndroidJniObject obj) { __thiz = obj; }
		UnsatisfiedLinkError()
		{
			__constructor();
		}
		UnsatisfiedLinkError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_UNSATISFIEDLINKERROR

