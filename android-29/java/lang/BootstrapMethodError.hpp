#pragma once

#ifndef JAVA_LANG_BOOTSTRAPMETHODERROR
#define JAVA_LANG_BOOTSTRAPMETHODERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "LinkageError.hpp"


namespace __jni_impl::java::lang
{
	class BootstrapMethodError : public __jni_impl::java::lang::LinkageError
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
	void BootstrapMethodError::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void BootstrapMethodError::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void BootstrapMethodError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void BootstrapMethodError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class BootstrapMethodError : public __jni_impl::java::lang::BootstrapMethodError
	{
	public:
		BootstrapMethodError(QAndroidJniObject obj) { __thiz = obj; }
		BootstrapMethodError(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		BootstrapMethodError(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BootstrapMethodError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		BootstrapMethodError()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_BOOTSTRAPMETHODERROR

