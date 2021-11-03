#include "../../JString.hpp"
#include "./CodeSource.hpp"
#include "./NoSuchAlgorithmException.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./Provider.hpp"
#include "../util/WeakHashMap.hpp"
#include "./Policy.hpp"

namespace java::security
{
	// Fields
	java::security::PermissionCollection Policy::UNSUPPORTED_EMPTY_COLLECTION()
	{
		return getStaticObjectField(
			"java.security.Policy",
			"UNSUPPORTED_EMPTY_COLLECTION",
			"Ljava/security/PermissionCollection;"
		);
	}
	
	// QJniObject forward
	Policy::Policy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Policy::Policy()
		: JObject(
			"java.security.Policy",
			"()V"
		) {}
	
	// Methods
	java::security::Policy Policy::getInstance(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;)Ljava/security/Policy;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	java::security::Policy Policy::getInstance(JString arg0, JObject arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;Ljava/lang/String;)Ljava/security/Policy;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	java::security::Policy Policy::getInstance(JString arg0, JObject arg1, java::security::Provider arg2)
	{
		return callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;Ljava/security/Provider;)Ljava/security/Policy;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	java::security::Policy Policy::getPolicy()
	{
		return callStaticObjectMethod(
			"java.security.Policy",
			"getPolicy",
			"()Ljava/security/Policy;"
		);
	}
	void Policy::setPolicy(java::security::Policy arg0)
	{
		callStaticMethod<void>(
			"java.security.Policy",
			"setPolicy",
			"(Ljava/security/Policy;)V",
			arg0.object()
		);
	}
	JObject Policy::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/Policy$Parameters;"
		);
	}
	java::security::PermissionCollection Policy::getPermissions(java::security::CodeSource arg0)
	{
		return callObjectMethod(
			"getPermissions",
			"(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;",
			arg0.object()
		);
	}
	java::security::PermissionCollection Policy::getPermissions(java::security::ProtectionDomain arg0)
	{
		return callObjectMethod(
			"getPermissions",
			"(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;",
			arg0.object()
		);
	}
	java::security::Provider Policy::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JString Policy::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jboolean Policy::implies(java::security::ProtectionDomain arg0, java::security::Permission arg1)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void Policy::refresh()
	{
		callMethod<void>(
			"refresh",
			"()V"
		);
	}
} // namespace java::security

