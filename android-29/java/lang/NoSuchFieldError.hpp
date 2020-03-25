#pragma once

#ifndef JAVA_LANG_NOSUCHFIELDERROR
#define JAVA_LANG_NOSUCHFIELDERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "LinkageError.hpp"
#include "IncompatibleClassChangeError.hpp"


namespace __jni_impl::java::lang
{
	class NoSuchFieldError : public __jni_impl::java::lang::IncompatibleClassChangeError
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
	void NoSuchFieldError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldError",
			"()V");
	}
	void NoSuchFieldError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class NoSuchFieldError : public __jni_impl::java::lang::NoSuchFieldError
	{
	public:
		NoSuchFieldError(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchFieldError()
		{
			__constructor();
		}
		NoSuchFieldError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_NOSUCHFIELDERROR

