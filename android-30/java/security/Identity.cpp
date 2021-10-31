#include "./IdentityScope.hpp"
#include "../util/Vector.hpp"
#include "./Identity.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	Identity::Identity(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Identity::Identity(jstring arg0)
		: __JniBaseClass(
			"java.security.Identity",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Identity::Identity(jstring arg0, java::security::IdentityScope arg1)
		: __JniBaseClass(
			"java.security.Identity",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	void Identity::addCertificate(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.object()
		);
	}
	jarray Identity::certificates()
	{
		return callObjectMethod(
			"certificates",
			"()[Ljava/security/Certificate;"
		).object<jarray>();
	}
	jboolean Identity::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Identity::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Identity::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass Identity::getPublicKey()
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	java::security::IdentityScope Identity::getScope()
	{
		return callObjectMethod(
			"getScope",
			"()Ljava/security/IdentityScope;"
		);
	}
	jint Identity::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Identity::removeCertificate(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.object()
		);
	}
	void Identity::setInfo(jstring arg0)
	{
		callMethod<void>(
			"setInfo",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Identity::setPublicKey(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	jstring Identity::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Identity::toString(jboolean arg0)
	{
		return callObjectMethod(
			"toString",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace java::security

