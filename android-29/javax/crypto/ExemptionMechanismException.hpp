#pragma once

#ifndef JAVAX_CRYPTO_EXEMPTIONMECHANISMEXCEPTION
#define JAVAX_CRYPTO_EXEMPTIONMECHANISMEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/security/GeneralSecurityException.hpp"


namespace __jni_impl::javax::crypto
{
	class ExemptionMechanismException : public __jni_impl::java::security::GeneralSecurityException
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
	void ExemptionMechanismException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ExemptionMechanismException",
			"()V"
		);
	}
	void ExemptionMechanismException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ExemptionMechanismException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ExemptionMechanismException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ExemptionMechanismException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class ExemptionMechanismException : public __jni_impl::javax::crypto::ExemptionMechanismException
	{
	public:
		ExemptionMechanismException(QAndroidJniObject obj) { __thiz = obj; }
		ExemptionMechanismException()
		{
			__constructor();
		}
		ExemptionMechanismException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_EXEMPTIONMECHANISMEXCEPTION

