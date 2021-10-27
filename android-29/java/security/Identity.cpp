#include "./IdentityScope.hpp"
#include "../util/Vector.hpp"
#include "./Identity.hpp"

namespace java::security
{
	// Fields
	
	Identity::Identity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Identity::Identity(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Identity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Identity::Identity(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.Identity",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	Identity::Identity(jstring &arg0, java::security::IdentityScope &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Identity",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	Identity::Identity(const QString &arg0, java::security::IdentityScope &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Identity",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void Identity::addCertificate(__JniBaseClass arg0)
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
	void Identity::removeCertificate(__JniBaseClass arg0)
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
	void Identity::setPublicKey(__JniBaseClass arg0)
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
} // namespace java::security

