#pragma once

#ifndef JAVA_SECURITY_IDENTITY
#define JAVA_SECURITY_IDENTITY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class IdentityScope;
}
namespace __jni_impl::java::util
{
	class Vector;
}

namespace __jni_impl::java::security
{
	class Identity : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1);
		
		// Methods
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		QAndroidJniObject toString(jboolean arg0);
		jint hashCode();
		QAndroidJniObject getPublicKey();
		void setPublicKey(__jni_impl::__JniBaseClass arg0);
		void setInfo(jstring arg0);
		void addCertificate(__jni_impl::__JniBaseClass arg0);
		void removeCertificate(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getInfo();
		QAndroidJniObject certificates();
		QAndroidJniObject getScope();
	};
} // namespace __jni_impl::java::security

#include "IdentityScope.hpp"
#include "../util/Vector.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Identity::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Identity",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Identity::__constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Identity",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Identity::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean Identity::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Identity::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Identity::toString(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(Z)Ljava/lang/String;",
			arg0);
	}
	jint Identity::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Identity::getPublicKey()
	{
		return __thiz.callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;");
	}
	void Identity::setPublicKey(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.__jniObject().object());
	}
	void Identity::setInfo(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInfo",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Identity::addCertificate(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.__jniObject().object());
	}
	void Identity::removeCertificate(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Identity::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Identity::certificates()
	{
		return __thiz.callObjectMethod(
			"certificates",
			"()[Ljava/security/Certificate;");
	}
	QAndroidJniObject Identity::getScope()
	{
		return __thiz.callObjectMethod(
			"getScope",
			"()Ljava/security/IdentityScope;");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Identity : public __jni_impl::java::security::Identity
	{
	public:
		Identity(QAndroidJniObject obj) { __thiz = obj; }
		Identity(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Identity(jstring arg0, __jni_impl::java::security::IdentityScope arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_IDENTITY

