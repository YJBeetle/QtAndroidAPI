#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}

namespace __jni_impl::java::security::cert
{
	class Certificate : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		QAndroidJniObject getPublicKey();
		jstring getType();
		jint hashCode();
		jstring toString();
		void verify(__jni_impl::__JniBaseClass arg0);
		void verify(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void verify(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		void verify(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Provider arg1);
	};
} // namespace __jni_impl::java::security::cert

#include "../Provider.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void Certificate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.Certificate",
			"(V)V");
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
	jbyteArray Certificate::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject Certificate::getPublicKey()
	{
		return __thiz.callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	jstring Certificate::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
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
	jstring Certificate::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Certificate::verify(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;)V",
			arg0.__jniObject().object()
		);
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
	void Certificate::verify(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::Provider arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class Certificate : public __jni_impl::java::security::cert::Certificate
	{
	public:
		Certificate(QAndroidJniObject obj) { __thiz = obj; }
		Certificate()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

