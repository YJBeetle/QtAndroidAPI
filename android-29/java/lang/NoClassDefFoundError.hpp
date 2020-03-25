#pragma once

#ifndef JAVA_LANG_NOCLASSDEFFOUNDERROR
#define JAVA_LANG_NOCLASSDEFFOUNDERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "LinkageError.hpp"


namespace __jni_impl::java::lang
{
	class NoClassDefFoundError : public __jni_impl::java::lang::LinkageError
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
	void NoClassDefFoundError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoClassDefFoundError",
			"()V");
	}
	void NoClassDefFoundError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoClassDefFoundError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class NoClassDefFoundError : public __jni_impl::java::lang::NoClassDefFoundError
	{
	public:
		NoClassDefFoundError(QAndroidJniObject obj) { __thiz = obj; }
		NoClassDefFoundError()
		{
			__constructor();
		}
		NoClassDefFoundError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_NOCLASSDEFFOUNDERROR

