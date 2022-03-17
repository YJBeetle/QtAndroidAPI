#pragma once

#include "../../JString.hpp"
#include "./CodeSource.def.hpp"
#include "./NoSuchAlgorithmException.def.hpp"
#include "./Permission.def.hpp"
#include "./PermissionCollection.def.hpp"
#include "./ProtectionDomain.def.hpp"
#include "./Provider.def.hpp"
#include "../util/WeakHashMap.def.hpp"
#include "./Policy.def.hpp"

namespace java::security
{
	// Fields
	inline java::security::PermissionCollection Policy::UNSUPPORTED_EMPTY_COLLECTION()
	{
		return getStaticObjectField(
			"java.security.Policy",
			"UNSUPPORTED_EMPTY_COLLECTION",
			"Ljava/security/PermissionCollection;"
		);
	}
	
	// Constructors
	inline Policy::Policy()
		: JObject(
			"java.security.Policy",
			"()V"
		) {}
	
	// Methods
	inline java::security::Policy Policy::getInstance(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.Policy",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Policy$Parameters;)Ljava/security/Policy;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::security::Policy Policy::getInstance(JString arg0, JObject arg1, JString arg2)
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
	inline java::security::Policy Policy::getInstance(JString arg0, JObject arg1, java::security::Provider arg2)
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
	inline java::security::Policy Policy::getPolicy()
	{
		return callStaticObjectMethod(
			"java.security.Policy",
			"getPolicy",
			"()Ljava/security/Policy;"
		);
	}
	inline void Policy::setPolicy(java::security::Policy arg0)
	{
		callStaticMethod<void>(
			"java.security.Policy",
			"setPolicy",
			"(Ljava/security/Policy;)V",
			arg0.object()
		);
	}
	inline JObject Policy::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/Policy$Parameters;"
		);
	}
	inline java::security::PermissionCollection Policy::getPermissions(java::security::CodeSource arg0) const
	{
		return callObjectMethod(
			"getPermissions",
			"(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;",
			arg0.object()
		);
	}
	inline java::security::PermissionCollection Policy::getPermissions(java::security::ProtectionDomain arg0) const
	{
		return callObjectMethod(
			"getPermissions",
			"(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;",
			arg0.object()
		);
	}
	inline java::security::Provider Policy::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JString Policy::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Policy::implies(java::security::ProtectionDomain arg0, java::security::Permission arg1) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Policy::refresh() const
	{
		callMethod<void>(
			"refresh",
			"()V"
		);
	}
} // namespace java::security

// Base class headers

