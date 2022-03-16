#pragma once

#include "../../JString.hpp"
#include "./Identity.def.hpp"
#include "./IdentityScope.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline IdentityScope::IdentityScope(JString arg0)
		: java::security::Identity(
			"java.security.IdentityScope",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline IdentityScope::IdentityScope(JString arg0, java::security::IdentityScope &arg1)
		: java::security::Identity(
			"java.security.IdentityScope",
			"(Ljava/lang/String;Ljava/security/IdentityScope;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline java::security::IdentityScope IdentityScope::getSystemScope()
	{
		return callStaticObjectMethod(
			"java.security.IdentityScope",
			"getSystemScope",
			"()Ljava/security/IdentityScope;"
		);
	}
	inline void IdentityScope::addIdentity(java::security::Identity arg0) const
	{
		callMethod<void>(
			"addIdentity",
			"(Ljava/security/Identity;)V",
			arg0.object()
		);
	}
	inline java::security::Identity IdentityScope::getIdentity(JString arg0) const
	{
		return callObjectMethod(
			"getIdentity",
			"(Ljava/lang/String;)Ljava/security/Identity;",
			arg0.object<jstring>()
		);
	}
	inline java::security::Identity IdentityScope::getIdentity(JObject arg0) const
	{
		return callObjectMethod(
			"getIdentity",
			"(Ljava/security/Principal;)Ljava/security/Identity;",
			arg0.object()
		);
	}
	inline JObject IdentityScope::identities() const
	{
		return callObjectMethod(
			"identities",
			"()Ljava/util/Enumeration;"
		);
	}
	inline void IdentityScope::removeIdentity(java::security::Identity arg0) const
	{
		callMethod<void>(
			"removeIdentity",
			"(Ljava/security/Identity;)V",
			arg0.object()
		);
	}
	inline jint IdentityScope::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString IdentityScope::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers
#include "./Identity.hpp"

