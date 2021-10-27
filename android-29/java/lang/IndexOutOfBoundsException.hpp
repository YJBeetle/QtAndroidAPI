#pragma once

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class IndexOutOfBoundsException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jlong arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void IndexOutOfBoundsException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"()V"
		);
	}
	void IndexOutOfBoundsException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"(I)V",
			arg0
		);
	}
	void IndexOutOfBoundsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IndexOutOfBoundsException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void IndexOutOfBoundsException::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"(J)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class IndexOutOfBoundsException : public __jni_impl::java::lang::IndexOutOfBoundsException
	{
	public:
		IndexOutOfBoundsException(QAndroidJniObject obj) { __thiz = obj; }
		IndexOutOfBoundsException()
		{
			__constructor();
		}
		IndexOutOfBoundsException(jint arg0)
		{
			__constructor(
				arg0);
		}
		IndexOutOfBoundsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IndexOutOfBoundsException(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

