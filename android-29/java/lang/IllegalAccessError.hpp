#pragma once

#ifndef JAVA_LANG_ILLEGALACCESSERROR
#define JAVA_LANG_ILLEGALACCESSERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "LinkageError.hpp"
#include "IncompatibleClassChangeError.hpp"


namespace __jni_impl::java::lang
{
	class IllegalAccessError : public __jni_impl::java::lang::IncompatibleClassChangeError
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
	void IllegalAccessError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessError",
			"()V"
		);
	}
	void IllegalAccessError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IllegalAccessError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class IllegalAccessError : public __jni_impl::java::lang::IllegalAccessError
	{
	public:
		IllegalAccessError(QAndroidJniObject obj) { __thiz = obj; }
		IllegalAccessError()
		{
			__constructor();
		}
		IllegalAccessError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ILLEGALACCESSERROR

