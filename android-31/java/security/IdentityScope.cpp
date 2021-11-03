#include "./Identity.hpp"
#include "./IdentityScope.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	IdentityScope::IdentityScope(QJniObject obj) : java::security::Identity(obj) {}
	
	// Constructors
	IdentityScope::IdentityScope(jstring arg0)
		: java::security::Identity(
			"java.security.IdentityScope",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	IdentityScope::IdentityScope(jstring arg0, java::security::IdentityScope &arg1)
		: java::security::Identity(
			"java.security.IdentityScope",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	java::security::IdentityScope IdentityScope::getSystemScope()
	{
		return callStaticObjectMethod(
			"java.security.IdentityScope",
			"getSystemScope",
			"()Ljava/security/IdentityScope;"
		);
	}
	void IdentityScope::addIdentity(java::security::Identity arg0)
	{
		callMethod<void>(
			"addIdentity",
			"(Ljava/security/Identity;)V",
			arg0.object()
		);
	}
	java::security::Identity IdentityScope::getIdentity(jstring arg0)
	{
		return callObjectMethod(
			"getIdentity",
			"(Ljava/lang/String;)Ljava/security/Identity;",
			arg0
		);
	}
	java::security::Identity IdentityScope::getIdentity(JObject arg0)
	{
		return callObjectMethod(
			"getIdentity",
			"(Ljava/security/Principal;)Ljava/security/Identity;",
			arg0.object()
		);
	}
	JObject IdentityScope::identities()
	{
		return callObjectMethod(
			"identities",
			"()Ljava/util/Enumeration;"
		);
	}
	void IdentityScope::removeIdentity(java::security::Identity arg0)
	{
		callMethod<void>(
			"removeIdentity",
			"(Ljava/security/Identity;)V",
			arg0.object()
		);
	}
	jint IdentityScope::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring IdentityScope::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

