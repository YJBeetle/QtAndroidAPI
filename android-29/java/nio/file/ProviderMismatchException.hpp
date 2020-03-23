#pragma once

#ifndef JAVA_NIO_FILE_PROVIDERMISMATCHEXCEPTION
#define JAVA_NIO_FILE_PROVIDERMISMATCHEXCEPTION

#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::nio::file
{
	class ProviderMismatchException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void ProviderMismatchException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderMismatchException",
			"()V");
	}
	void ProviderMismatchException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderMismatchException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class ProviderMismatchException : public __jni_impl::java::nio::file::ProviderMismatchException
	{
	public:
		ProviderMismatchException(QAndroidJniObject obj) { __thiz = obj; }
		ProviderMismatchException()
		{
			__constructor();
		}
		ProviderMismatchException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_PROVIDERMISMATCHEXCEPTION

