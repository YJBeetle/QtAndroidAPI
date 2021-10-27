#pragma once

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
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1);
		void __constructor(const QString &arg0, __jni_impl::java::security::IdentityScope arg1);
		
		// Methods
		void addCertificate(__jni_impl::__JniBaseClass arg0);
		jarray certificates();
		jboolean equals(jobject arg0);
		jstring getInfo();
		jstring getName();
		QAndroidJniObject getPublicKey();
		QAndroidJniObject getScope();
		jint hashCode();
		void removeCertificate(__jni_impl::__JniBaseClass arg0);
		void setInfo(jstring arg0);
		void setInfo(const QString &arg0);
		void setPublicKey(__jni_impl::__JniBaseClass arg0);
		jstring toString();
		jstring toString(jboolean arg0);
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
			arg0
		);
	}
	void Identity::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Identity",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Identity::__constructor(jstring arg0, __jni_impl::java::security::IdentityScope arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Identity",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Identity::__constructor(const QString &arg0, __jni_impl::java::security::IdentityScope arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Identity",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void Identity::addCertificate(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	jarray Identity::certificates()
	{
		return __thiz.callObjectMethod(
			"certificates",
			"()[Ljava/security/Certificate;"
		).object<jarray>();
	}
	jboolean Identity::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Identity::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Identity::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Identity::getPublicKey()
	{
		return __thiz.callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	QAndroidJniObject Identity::getScope()
	{
		return __thiz.callObjectMethod(
			"getScope",
			"()Ljava/security/IdentityScope;"
		);
	}
	jint Identity::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Identity::removeCertificate(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void Identity::setInfo(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInfo",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Identity::setInfo(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setInfo",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Identity::setPublicKey(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Identity::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Identity::toString(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
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

