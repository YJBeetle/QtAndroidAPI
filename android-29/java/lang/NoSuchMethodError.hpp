#pragma once

#ifndef JAVA_LANG_NOSUCHMETHODERROR
#define JAVA_LANG_NOSUCHMETHODERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "LinkageError.hpp"
#include "IncompatibleClassChangeError.hpp"


namespace __jni_impl::java::lang
{
	class NoSuchMethodError : public __jni_impl::java::lang::IncompatibleClassChangeError
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
	void NoSuchMethodError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodError",
			"()V"
		);
	}
	void NoSuchMethodError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NoSuchMethodError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class NoSuchMethodError : public __jni_impl::java::lang::NoSuchMethodError
	{
	public:
		NoSuchMethodError(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchMethodError()
		{
			__constructor();
		}
		NoSuchMethodError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_NOSUCHMETHODERROR

