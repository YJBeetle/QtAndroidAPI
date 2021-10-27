#pragma once

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
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void BootstrapMethodError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"()V"
		);
	}
	void BootstrapMethodError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BootstrapMethodError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void BootstrapMethodError::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void BootstrapMethodError::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void BootstrapMethodError::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class BootstrapMethodError : public __jni_impl::java::lang::BootstrapMethodError
	{
	public:
		BootstrapMethodError(QAndroidJniObject obj) { __thiz = obj; }
		BootstrapMethodError()
		{
			__constructor();
		}
		BootstrapMethodError(jstring arg0)
		{
			__constructor(
				arg0);
		}
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
	};
} // namespace java::lang

