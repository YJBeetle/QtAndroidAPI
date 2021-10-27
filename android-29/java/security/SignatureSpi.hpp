#pragma once

#ifndef JAVA_SECURITY_SIGNATURESPI
#define JAVA_SECURITY_SIGNATURESPI

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::security
{
	class AlgorithmParameters;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}

namespace __jni_impl::java::security
{
	class SignatureSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject clone();
	};
} // namespace __jni_impl::java::security

#include "../nio/ByteBuffer.hpp"
#include "AlgorithmParameters.hpp"
#include "SecureRandom.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void SignatureSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureSpi",
			"()V"
		);
	}
	
	// Methods
	jobject SignatureSpi::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class SignatureSpi : public __jni_impl::java::security::SignatureSpi
	{
	public:
		SignatureSpi(QAndroidJniObject obj) { __thiz = obj; }
		SignatureSpi()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SIGNATURESPI

