#pragma once

#ifndef JAVAX_CRYPTO_MAC
#define JAVAX_CRYPTO_MAC

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security
{
	class Provider_Service;
}
namespace __jni_impl::javax::crypto
{
	class MacSpi;
}

namespace __jni_impl::javax::crypto
{
	class Mac : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		jobject clone();
		jbyteArray doFinal();
		jbyteArray doFinal(jbyteArray arg0);
		void doFinal(jbyteArray arg0, jint arg1);
		jstring getAlgorithm();
		jint getMacLength();
		QAndroidJniObject getProvider();
		void init(__jni_impl::__JniBaseClass arg0);
		void init(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void reset();
		void update(jbyteArray arg0);
		void update(jbyte arg0);
		void update(__jni_impl::java::nio::ByteBuffer arg0);
		void update(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/security/Provider.hpp"
#include "../../java/security/Provider_Service.hpp"
#include "MacSpi.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void Mac::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.Mac",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Mac::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Mac;",
			arg0
		);
	}
	QAndroidJniObject Mac::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Mac;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Mac::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Mac;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Mac::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Mac;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Mac::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Mac;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Mac::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Mac;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jobject Mac::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jbyteArray Mac::doFinal()
	{
		return __thiz.callObjectMethod(
			"doFinal",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray Mac::doFinal(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"doFinal",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	void Mac::doFinal(jbyteArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"doFinal",
			"([BI)V",
			arg0,
			arg1
		);
	}
	jstring Mac::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Mac::getMacLength()
	{
		return __thiz.callMethod<jint>(
			"getMacLength",
			"()I"
		);
	}
	QAndroidJniObject Mac::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void Mac::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.__jniObject().object()
		);
	}
	void Mac::init(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Mac::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Mac::update(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"([B)V",
			arg0
		);
	}
	void Mac::update(jbyte arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	void Mac::update(__jni_impl::java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Mac::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class Mac : public __jni_impl::javax::crypto::Mac
	{
	public:
		Mac(QAndroidJniObject obj) { __thiz = obj; }
		Mac()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_MAC

