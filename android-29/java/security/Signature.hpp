#pragma once

#ifndef JAVA_SECURITY_SIGNATURE
#define JAVA_SECURITY_SIGNATURE

#include "../../__JniBaseClass.hpp"
#include "SignatureSpi.hpp"

namespace __jni_impl::java::security
{
	class Provider;
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
	class Provider_Service;
}
namespace __jni_impl::java::security::cert
{
	class Certificate;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}

namespace __jni_impl::java::security
{
	class Signature : public __jni_impl::java::security::SignatureSpi
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jobject clone();
		void update(jbyteArray arg0);
		void update(jbyteArray arg0, jint arg1, jint arg2);
		void update(jbyte arg0);
		void update(__jni_impl::java::nio::ByteBuffer arg0);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		QAndroidJniObject getParameters();
		jint sign(jbyteArray arg0, jint arg1, jint arg2);
		jbyteArray sign();
		jboolean verify(jbyteArray arg0, jint arg1, jint arg2);
		jboolean verify(jbyteArray arg0);
		QAndroidJniObject getProvider();
		jstring getAlgorithm();
		void initVerify(__jni_impl::java::security::cert::Certificate arg0);
		void initVerify(__jni_impl::__JniBaseClass arg0);
		void initSign(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1);
		void initSign(__jni_impl::__JniBaseClass arg0);
		void setParameter(__jni_impl::__JniBaseClass arg0);
		void setParameter(jstring arg0, jobject arg1);
		void setParameter(const QString &arg0, jobject arg1);
		jobject getParameter(jstring arg0);
		jobject getParameter(const QString &arg0);
	};
} // namespace __jni_impl::java::security

#include "Provider.hpp"
#include "../nio/ByteBuffer.hpp"
#include "AlgorithmParameters.hpp"
#include "Provider_Service.hpp"
#include "cert/Certificate.hpp"
#include "SecureRandom.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Signature::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.Signature",
			"(V)V");
	}
	
	// Methods
	jstring Signature::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject Signature::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void Signature::update(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"([B)V",
			arg0
		);
	}
	void Signature::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Signature::update(jbyte arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	void Signature::update(__jni_impl::java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Signature::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/Signature;",
			arg0
		);
	}
	QAndroidJniObject Signature::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/Signature;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Signature::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Signature;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Signature::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Signature;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Signature::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Signature;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Signature::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Signature;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Signature::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	jint Signature::sign(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"sign",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray Signature::sign()
	{
		return __thiz.callObjectMethod(
			"sign",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean Signature::verify(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"verify",
			"([BII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Signature::verify(jbyteArray arg0)
	{
		return __thiz.callMethod<jboolean>(
			"verify",
			"([B)Z",
			arg0
		);
	}
	QAndroidJniObject Signature::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring Signature::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Signature::initVerify(__jni_impl::java::security::cert::Certificate arg0)
	{
		__thiz.callMethod<void>(
			"initVerify",
			"(Ljava/security/cert/Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void Signature::initVerify(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"initVerify",
			"(Ljava/security/PublicKey;)V",
			arg0.__jniObject().object()
		);
	}
	void Signature::initSign(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initSign",
			"(Ljava/security/PrivateKey;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Signature::initSign(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"initSign",
			"(Ljava/security/PrivateKey;)V",
			arg0.__jniObject().object()
		);
	}
	void Signature::setParameter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParameter",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void Signature::setParameter(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Signature::setParameter(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jobject Signature::getParameter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Signature::getParameter(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Signature : public __jni_impl::java::security::Signature
	{
	public:
		Signature(QAndroidJniObject obj) { __thiz = obj; }
		Signature()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SIGNATURE

