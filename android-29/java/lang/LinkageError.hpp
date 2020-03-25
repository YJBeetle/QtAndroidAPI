#pragma once

#ifndef JAVA_LANG_LINKAGEERROR
#define JAVA_LANG_LINKAGEERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"


namespace __jni_impl::java::lang
{
	class LinkageError : public __jni_impl::java::lang::Error
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void LinkageError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.LinkageError",
			"()V");
	}
	void LinkageError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.LinkageError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void LinkageError::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.LinkageError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class LinkageError : public __jni_impl::java::lang::LinkageError
	{
	public:
		LinkageError(QAndroidJniObject obj) { __thiz = obj; }
		LinkageError()
		{
			__constructor();
		}
		LinkageError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		LinkageError(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_LINKAGEERROR

