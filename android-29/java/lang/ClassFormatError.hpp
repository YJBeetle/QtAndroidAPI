#pragma once

#ifndef JAVA_LANG_CLASSFORMATERROR
#define JAVA_LANG_CLASSFORMATERROR

#include "LinkageError.hpp"


namespace __jni_impl::java::lang
{
	class ClassFormatError : public __jni_impl::java::lang::LinkageError
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
	void ClassFormatError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassFormatError",
			"()V");
	}
	void ClassFormatError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassFormatError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ClassFormatError : public __jni_impl::java::lang::ClassFormatError
	{
	public:
		ClassFormatError(QAndroidJniObject obj) { __thiz = obj; }
		ClassFormatError()
		{
			__constructor();
		}
		ClassFormatError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_CLASSFORMATERROR

