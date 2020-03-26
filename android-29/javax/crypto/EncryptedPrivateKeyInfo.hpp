#pragma once

#ifndef JAVAX_CRYPTO_ENCRYPTEDPRIVATEKEYINFO
#define JAVAX_CRYPTO_ENCRYPTEDPRIVATEKEYINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class AlgorithmParameters;
}
namespace __jni_impl::java::security::spec
{
	class PKCS8EncodedKeySpec;
}
namespace __jni_impl::javax::crypto
{
	class Cipher;
}
namespace __jni_impl::java::security
{
	class Provider;
}

namespace __jni_impl::javax::crypto
{
	class EncryptedPrivateKeyInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::AlgorithmParameters arg0, jbyteArray arg1);
		void __constructor(jstring arg0, jbyteArray arg1);
		void __constructor(jbyteArray arg0);
		
		// Methods
		jbyteArray getEncoded();
		QAndroidJniObject getKeySpec(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getKeySpec(__jni_impl::javax::crypto::Cipher arg0);
		QAndroidJniObject getKeySpec(__jni_impl::__JniBaseClass arg0, jstring arg1);
		QAndroidJniObject getKeySpec(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Provider arg1);
		jstring getAlgName();
		QAndroidJniObject getAlgParameters();
		jbyteArray getEncryptedData();
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/spec/PKCS8EncodedKeySpec.hpp"
#include "Cipher.hpp"
#include "../../java/security/Provider.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void EncryptedPrivateKeyInfo::__constructor(__jni_impl::java::security::AlgorithmParameters arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/security/AlgorithmParameters;[B)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void EncryptedPrivateKeyInfo::__constructor(jstring arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1);
	}
	void EncryptedPrivateKeyInfo::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"([B)V",
			arg0);
	}
	
	// Methods
	jbyteArray EncryptedPrivateKeyInfo::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__jni_impl::javax::crypto::Cipher arg0)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljavax/crypto/Cipher;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Provider arg1)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/security/Provider;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring EncryptedPrivateKeyInfo::getAlgName()
	{
		return __thiz.callObjectMethod(
			"getAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getAlgParameters()
	{
		return __thiz.callObjectMethod(
			"getAlgParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	jbyteArray EncryptedPrivateKeyInfo::getEncryptedData()
	{
		return __thiz.callObjectMethod(
			"getEncryptedData",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class EncryptedPrivateKeyInfo : public __jni_impl::javax::crypto::EncryptedPrivateKeyInfo
	{
	public:
		EncryptedPrivateKeyInfo(QAndroidJniObject obj) { __thiz = obj; }
		EncryptedPrivateKeyInfo(__jni_impl::java::security::AlgorithmParameters arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		EncryptedPrivateKeyInfo(jstring arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		EncryptedPrivateKeyInfo(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_ENCRYPTEDPRIVATEKEYINFO

