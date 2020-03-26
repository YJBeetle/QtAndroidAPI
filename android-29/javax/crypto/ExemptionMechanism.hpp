#pragma once

#ifndef JAVAX_CRYPTO_EXEMPTIONMECHANISM
#define JAVAX_CRYPTO_EXEMPTIONMECHANISM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::javax::crypto
{
	class ExemptionMechanismSpi;
}
namespace __jni_impl::java::security
{
	class AlgorithmParameters;
}

namespace __jni_impl::javax::crypto
{
	class ExemptionMechanism : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		void init(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void init(__jni_impl::__JniBaseClass arg0);
		void init(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AlgorithmParameters arg1);
		QAndroidJniObject getProvider();
		jint genExemptionBlob(jbyteArray arg0);
		jbyteArray genExemptionBlob();
		jint genExemptionBlob(jbyteArray arg0, jint arg1);
		jboolean isCryptoAllowed(__jni_impl::__JniBaseClass arg0);
		jint getOutputSize(jint arg0);
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/security/Provider.hpp"
#include "ExemptionMechanismSpi.hpp"
#include "../../java/security/AlgorithmParameters.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void ExemptionMechanism::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ExemptionMechanism",
			"(V)V");
	}
	
	// Methods
	jstring ExemptionMechanism::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ExemptionMechanism::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ExemptionMechanism::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/ExemptionMechanism;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ExemptionMechanism::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0
		);
	}
	void ExemptionMechanism::init(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ExemptionMechanism::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.__jniObject().object()
		);
	}
	void ExemptionMechanism::init(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::AlgorithmParameters arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ExemptionMechanism::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jint ExemptionMechanism::genExemptionBlob(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"genExemptionBlob",
			"([B)I",
			arg0
		);
	}
	jbyteArray ExemptionMechanism::genExemptionBlob()
	{
		return __thiz.callObjectMethod(
			"genExemptionBlob",
			"()[B"
		).object<jbyteArray>();
	}
	jint ExemptionMechanism::genExemptionBlob(jbyteArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"genExemptionBlob",
			"([BI)I",
			arg0,
			arg1
		);
	}
	jboolean ExemptionMechanism::isCryptoAllowed(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCryptoAllowed",
			"(Ljava/security/Key;)Z",
			arg0.__jniObject().object()
		);
	}
	jint ExemptionMechanism::getOutputSize(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class ExemptionMechanism : public __jni_impl::javax::crypto::ExemptionMechanism
	{
	public:
		ExemptionMechanism(QAndroidJniObject obj) { __thiz = obj; }
		ExemptionMechanism()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_EXEMPTIONMECHANISM

