#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"


namespace __jni_impl::java::lang
{
	class InstantiationError : public __jni_impl::java::lang::IncompatibleClassChangeError
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
	void InstantiationError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationError",
			"()V"
		);
	}
	void InstantiationError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InstantiationError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class InstantiationError : public __jni_impl::java::lang::InstantiationError
	{
	public:
		InstantiationError(QAndroidJniObject obj) { __thiz = obj; }
		InstantiationError()
		{
			__constructor();
		}
		InstantiationError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

