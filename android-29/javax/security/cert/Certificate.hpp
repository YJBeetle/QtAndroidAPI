#pragma once

#ifndef JAVAX_SECURITY_CERT_CERTIFICATE
#define JAVAX_SECURITY_CERT_CERTIFICATE

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::security::cert
{
	class Certificate : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jbyteArray getEncoded();
		void verify(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void verify(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		void verify(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getPublicKey();
	};
} // namespace __jni_impl::javax::security::cert


namespace __jni_impl::javax::security::cert
{
	// Fields
	
	// Constructors
	void Certificate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.Certificate",
			"()V"
		);
	}
	
	// Methods
	jboolean Certificate::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Certificate::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Certificate::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray Certificate::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	void Certificate::verify(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Certificate::verify(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Certificate::verify(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Certificate::getPublicKey()
	{
		return __thiz.callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
} // namespace __jni_impl::javax::security::cert

namespace javax::security::cert
{
	class Certificate : public __jni_impl::javax::security::cert::Certificate
	{
	public:
		Certificate(QAndroidJniObject obj) { __thiz = obj; }
		Certificate()
		{
			__constructor();
		}
	};
} // namespace javax::security::cert

#endif // JAVAX_SECURITY_CERT_CERTIFICATE

