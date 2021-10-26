#pragma once

#ifndef JAVA_LANG_VERIFYERROR
#define JAVA_LANG_VERIFYERROR

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "LinkageError.hpp"


namespace __jni_impl::java::lang
{
	class VerifyError : public __jni_impl::java::lang::LinkageError
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
	void VerifyError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.VerifyError",
			"()V"
		);
	}
	void VerifyError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VerifyError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void VerifyError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VerifyError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class VerifyError : public __jni_impl::java::lang::VerifyError
	{
	public:
		VerifyError(QAndroidJniObject obj) { __thiz = obj; }
		VerifyError()
		{
			__constructor();
		}
		VerifyError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_VERIFYERROR

