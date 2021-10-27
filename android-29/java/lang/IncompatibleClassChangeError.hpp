#pragma once

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "LinkageError.hpp"


namespace __jni_impl::java::lang
{
	class IncompatibleClassChangeError : public __jni_impl::java::lang::LinkageError
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
	void IncompatibleClassChangeError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IncompatibleClassChangeError",
			"()V"
		);
	}
	void IncompatibleClassChangeError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IncompatibleClassChangeError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IncompatibleClassChangeError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IncompatibleClassChangeError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class IncompatibleClassChangeError : public __jni_impl::java::lang::IncompatibleClassChangeError
	{
	public:
		IncompatibleClassChangeError(QAndroidJniObject obj) { __thiz = obj; }
		IncompatibleClassChangeError()
		{
			__constructor();
		}
		IncompatibleClassChangeError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

