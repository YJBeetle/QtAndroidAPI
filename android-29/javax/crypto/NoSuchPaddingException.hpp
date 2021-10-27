#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace __jni_impl::javax::crypto
{
	class NoSuchPaddingException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::crypto


namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void NoSuchPaddingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.NoSuchPaddingException",
			"()V"
		);
	}
	void NoSuchPaddingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.NoSuchPaddingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NoSuchPaddingException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.NoSuchPaddingException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class NoSuchPaddingException : public __jni_impl::javax::crypto::NoSuchPaddingException
	{
	public:
		NoSuchPaddingException(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchPaddingException()
		{
			__constructor();
		}
		NoSuchPaddingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::crypto

