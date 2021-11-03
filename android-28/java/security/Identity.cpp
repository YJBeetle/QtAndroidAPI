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
	void Identity::addCertificate(JObject arg0) const
	{
		callMethod<void>(
			"addCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.object()
		);
	}
	JArray Identity::certificates() const
	{
		return callObjectMethod(
			"certificates",
			"()[Ljava/security/Certificate;"
		);
	}
	jboolean Identity::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Identity::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Ljava/lang/String;"
		);
	}
	JString Identity::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JObject Identity::getPublicKey() const
	{
		return callObjectMethod(
			"getPublicKey",
			"()Ljava/security/PublicKey;"
		);
	}
	java::security::IdentityScope Identity::getScope() const
	{
		return callObjectMethod(
			"getScope",
			"()Ljava/security/IdentityScope;"
		);
	}
	jint Identity::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Identity::removeCertificate(JObject arg0) const
	{
		callMethod<void>(
			"removeCertificate",
			"(Ljava/security/Certificate;)V",
			arg0.object()
		);
	}
	void Identity::setInfo(JString arg0) const
	{
		callMethod<void>(
			"setInfo",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Identity::setPublicKey(JObject arg0) const
	{
		callMethod<void>(
			"setPublicKey",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	JString Identity::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JString Identity::toString(jboolean arg0) const
	{
		return callObjectMethod(
			"toString",
			"(Z)Ljava/lang/String;",
			arg0
		);
	}
} // namespace java::security

