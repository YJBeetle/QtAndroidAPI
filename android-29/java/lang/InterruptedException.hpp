#pragma once

#ifndef JAVA_LANG_INTERRUPTEDEXCEPTION
#define JAVA_LANG_INTERRUPTEDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"


namespace __jni_impl::java::lang
{
	class InterruptedException : public __jni_impl::java::lang::Exception
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
	void InterruptedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InterruptedException",
			"()V"
		);
	}
	void InterruptedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InterruptedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InterruptedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InterruptedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class InterruptedException : public __jni_impl::java::lang::InterruptedException
	{
	public:
		InterruptedException(QAndroidJniObject obj) { __thiz = obj; }
		InterruptedException()
		{
			__constructor();
		}
		InterruptedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_INTERRUPTEDEXCEPTION

