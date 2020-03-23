#pragma once

#ifndef JAVAX_CRYPTO_CIPHER
#define JAVAX_CRYPTO_CIPHER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::javax::crypto
{
	class CipherSpi;
}
namespace __jni_impl::javax::crypto
{
	class ExemptionMechanism;
}
namespace __jni_impl::java::security
{
	class Provider_Service;
}
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
namespace __jni_impl::java::security::cert
{
	class Certificate;
}

namespace __jni_impl::javax::crypto
{
	class Cipher : public __JniBaseClass
	{
	public:
		// Fields
		static jint ENCRYPT_MODE();
		static jint DECRYPT_MODE();
		static jint WRAP_MODE();
		static jint UNWRAP_MODE();
		static jint PUBLIC_KEY();
		static jint PRIVATE_KEY();
		static jint SECRET_KEY();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jint update(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4);
		jint update(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3);
		QAndroidJniObject update(jbyteArray arg0, jint arg1, jint arg2);
		QAndroidJniObject update(jbyteArray arg0);
		jint update(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		void init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::AlgorithmParameters arg2);
		void init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::SecureRandom arg2);
		void init(jint arg0, __jni_impl::__JniBaseClass arg1);
		void init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::java::security::SecureRandom arg3);
		void init(jint arg0, __jni_impl::java::security::cert::Certificate arg1);
		void init(jint arg0, __jni_impl::java::security::cert::Certificate arg1, __jni_impl::java::security::SecureRandom arg2);
		void init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::AlgorithmParameters arg2, __jni_impl::java::security::SecureRandom arg3);
		QAndroidJniObject wrap(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getParameters();
		QAndroidJniObject unwrap(jbyteArray arg0, jstring arg1, jint arg2);
		QAndroidJniObject getProvider();
		QAndroidJniObject doFinal(jbyteArray arg0);
		jint doFinal(jbyteArray arg0, jint arg1);
		QAndroidJniObject doFinal();
		jint doFinal(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4);
		jint doFinal(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1);
		QAndroidJniObject doFinal(jbyteArray arg0, jint arg1, jint arg2);
		jint doFinal(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3);
		QAndroidJniObject getAlgorithm();
		QAndroidJniObject getExemptionMechanism();
		void updateAAD(jbyteArray arg0, jint arg1, jint arg2);
		void updateAAD(jbyteArray arg0);
		void updateAAD(__jni_impl::java::nio::ByteBuffer arg0);
		jint getBlockSize();
		jint getOutputSize(jint arg0);
		QAndroidJniObject getIV();
		static jint getMaxAllowedKeyLength(jstring arg0);
		static QAndroidJniObject getMaxAllowedParameterSpec(jstring arg0);
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/security/Provider.hpp"
#include "CipherSpi.hpp"
#include "ExemptionMechanism.hpp"
#include "../../java/security/Provider_Service.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "../../java/security/cert/Certificate.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	jint Cipher::ENCRYPT_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"ENCRYPT_MODE");
	}
	jint Cipher::DECRYPT_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"DECRYPT_MODE");
	}
	jint Cipher::WRAP_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"WRAP_MODE");
	}
	jint Cipher::UNWRAP_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"UNWRAP_MODE");
	}
	jint Cipher::PUBLIC_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"PUBLIC_KEY");
	}
	jint Cipher::PRIVATE_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"PRIVATE_KEY");
	}
	jint Cipher::SECRET_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"SECRET_KEY");
	}
	
	// Constructors
	void Cipher::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.Cipher",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Cipher::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Cipher::update(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4)
	{
		return __thiz.callMethod<jint>(
			"update",
			"([BII[BI)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	jint Cipher::update(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"([BII[B)I",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Cipher::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"update",
			"([BII)[B",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject Cipher::update(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"update",
			"([B)[B",
			arg0);
	}
	jint Cipher::update(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Cipher::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Cipher;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject Cipher::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0);
	}
	QAndroidJniObject Cipher::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0,
			arg1);
	}
	void Cipher::init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::AlgorithmParameters arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Cipher::init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Cipher::init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::SecureRandom arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Cipher::init(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Cipher::init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::java::security::SecureRandom arg3)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void Cipher::init(jint arg0, __jni_impl::java::security::cert::Certificate arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Cipher::init(jint arg0, __jni_impl::java::security::cert::Certificate arg1, __jni_impl::java::security::SecureRandom arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Cipher::init(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::AlgorithmParameters arg2, __jni_impl::java::security::SecureRandom arg3)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject Cipher::wrap(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"(Ljava/security/Key;)[B",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Cipher::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/security/AlgorithmParameters;");
	}
	QAndroidJniObject Cipher::unwrap(jbyteArray arg0, jstring arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"([BLjava/lang/String;I)Ljava/security/Key;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject Cipher::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;");
	}
	QAndroidJniObject Cipher::doFinal(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"doFinal",
			"([B)[B",
			arg0);
	}
	jint Cipher::doFinal(jbyteArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"doFinal",
			"([BI)I",
			arg0,
			arg1);
	}
	QAndroidJniObject Cipher::doFinal()
	{
		return __thiz.callObjectMethod(
			"doFinal",
			"()[B");
	}
	jint Cipher::doFinal(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4)
	{
		return __thiz.callMethod<jint>(
			"doFinal",
			"([BII[BI)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	jint Cipher::doFinal(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::nio::ByteBuffer arg1)
	{
		return __thiz.callMethod<jint>(
			"doFinal",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Cipher::doFinal(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"doFinal",
			"([BII)[B",
			arg0,
			arg1,
			arg2);
	}
	jint Cipher::doFinal(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3)
	{
		return __thiz.callMethod<jint>(
			"doFinal",
			"([BII[B)I",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Cipher::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Cipher::getExemptionMechanism()
	{
		return __thiz.callObjectMethod(
			"getExemptionMechanism",
			"()Ljavax/crypto/ExemptionMechanism;");
	}
	void Cipher::updateAAD(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"updateAAD",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	void Cipher::updateAAD(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"updateAAD",
			"([B)V",
			arg0);
	}
	void Cipher::updateAAD(__jni_impl::java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"updateAAD",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object());
	}
	jint Cipher::getBlockSize()
	{
		return __thiz.callMethod<jint>(
			"getBlockSize",
			"()I");
	}
	jint Cipher::getOutputSize(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0);
	}
	QAndroidJniObject Cipher::getIV()
	{
		return __thiz.callObjectMethod(
			"getIV",
			"()[B");
	}
	jint Cipher::getMaxAllowedKeyLength(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"javax.crypto.Cipher",
			"getMaxAllowedKeyLength",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject Cipher::getMaxAllowedParameterSpec(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getMaxAllowedParameterSpec",
			"(Ljava/lang/String;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0);
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class Cipher : public __jni_impl::javax::crypto::Cipher
	{
	public:
		Cipher(QAndroidJniObject obj) { __thiz = obj; }
		Cipher()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_CIPHER

