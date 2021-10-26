#pragma once

#ifndef JAVA_SECURITY_MESSAGEDIGEST
#define JAVA_SECURITY_MESSAGEDIGEST

#include "../../__JniBaseClass.hpp"
#include "MessageDigestSpi.hpp"

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
	class MessageDigest : public __jni_impl::java::security::MessageDigestSpi
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
		void update(__jni_impl::java::nio::ByteBuffer arg0);
		void update(jbyte arg0);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		void reset();
		QAndroidJniObject getProvider();
		jint digest(jbyteArray arg0, jint arg1, jint arg2);
		jbyteArray digest();
		jbyteArray digest(jbyteArray arg0);
		static jboolean isEqual(jbyteArray arg0, jbyteArray arg1);
		jint getDigestLength();
		jstring getAlgorithm();
	};
} // namespace __jni_impl::java::security

#include "Provider.hpp"
#include "../nio/ByteBuffer.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void MessageDigest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.MessageDigest",
			"(V)V");
	}
	
	// Methods
	jstring MessageDigest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject MessageDigest::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void MessageDigest::update(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"([B)V",
			arg0
		);
	}
	void MessageDigest::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MessageDigest::update(__jni_impl::java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void MessageDigest::update(jbyte arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	QAndroidJniObject MessageDigest::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0
		);
	}
	QAndroidJniObject MessageDigest::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/MessageDigest;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MessageDigest::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MessageDigest::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MessageDigest::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MessageDigest::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/MessageDigest;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void MessageDigest::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	QAndroidJniObject MessageDigest::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jint MessageDigest::digest(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"digest",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray MessageDigest::digest()
	{
		return __thiz.callObjectMethod(
			"digest",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray MessageDigest::digest(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"digest",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jboolean MessageDigest::isEqual(jbyteArray arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.security.MessageDigest",
			"isEqual",
			"([B[B)Z",
			arg0,
			arg1
		);
	}
	jint MessageDigest::getDigestLength()
	{
		return __thiz.callMethod<jint>(
			"getDigestLength",
			"()I"
		);
	}
	jstring MessageDigest::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class MessageDigest : public __jni_impl::java::security::MessageDigest
	{
	public:
		MessageDigest(QAndroidJniObject obj) { __thiz = obj; }
		MessageDigest()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_MESSAGEDIGEST

