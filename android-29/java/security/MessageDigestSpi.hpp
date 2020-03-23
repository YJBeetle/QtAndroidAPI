#pragma once

#ifndef JAVA_SECURITY_MESSAGEDIGESTSPI
#define JAVA_SECURITY_MESSAGEDIGESTSPI

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::java::security
{
	class MessageDigestSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
	};
} // namespace __jni_impl::java::security

#include "../nio/ByteBuffer.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void MessageDigestSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.MessageDigestSpi",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MessageDigestSpi::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class MessageDigestSpi : public __jni_impl::java::security::MessageDigestSpi
	{
	public:
		MessageDigestSpi(QAndroidJniObject obj) { __thiz = obj; }
		MessageDigestSpi()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_MESSAGEDIGESTSPI

