#pragma once

#ifndef JAVA_LANG_ARRAYSTOREEXCEPTION
#define JAVA_LANG_ARRAYSTOREEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class ArrayStoreException : public __jni_impl::java::lang::RuntimeException
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
	void ArrayStoreException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayStoreException",
			"()V");
	}
	void ArrayStoreException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayStoreException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ArrayStoreException : public __jni_impl::java::lang::ArrayStoreException
	{
	public:
		ArrayStoreException(QAndroidJniObject obj) { __thiz = obj; }
		ArrayStoreException()
		{
			__constructor();
		}
		ArrayStoreException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ARRAYSTOREEXCEPTION

