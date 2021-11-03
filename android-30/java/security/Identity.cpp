#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./IdentityScope.hpp"
#include "../util/Vector.hpp"
#include "./Identity.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	Identity::Identity(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Identity::Identity(JString arg0)
		: JObject(
			"java.security.Identity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Identity::Identity(JString arg0, java::security::IdentityScope arg1)
		: JObject(
			"java.security.Identity",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	void Identity::addCertificate(JObject arg0)
	{
		callMethod<void>(
			"addCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.object()
		);
	}
	JArray Identity::certificates()
	{
		return callObjectMethod(
			"certificates",
			"()[Ljava/security/Certificate;"
		);
	}
	jboolean Identity::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Identity::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;"
		);
	}
	JString Identity::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JObject Identity::getPublicKey()
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
	void Identity::removeCertificate(JObject arg0)
	{
		callMethod<void>(
			"removeCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.object()
		);
	}
	void Identity::setInfo(JString arg0)
	{
		callMethod<void>(
			"setInfo",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Identity::setPublicKey(JObject arg0)
	{
		callMethod<void>(
			"setPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	JString Identity::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JString Identity::toString(jboolean arg0)
	{
		return callObjectMethod(
			"toString",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
} // namespace java::security

