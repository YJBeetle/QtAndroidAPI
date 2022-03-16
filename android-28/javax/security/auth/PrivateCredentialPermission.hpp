#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../java/io/ObjectInputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/Permission.def.hpp"
#include "../../../java/security/PermissionCollection.def.hpp"
#include "./PrivateCredentialPermission.def.hpp"

namespace javax::security::auth
{
	// Fields
	
	// Constructors
	inline PrivateCredentialPermission::PrivateCredentialPermission(JString arg0, JString arg1)
		: java::security::Permission(
			"javax.security.auth.PrivateCredentialPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jboolean PrivateCredentialPermission::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString PrivateCredentialPermission::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	inline JString PrivateCredentialPermission::getCredentialClass() const
	{
		return callObjectMethod(
			"getCredentialClass",
			"()Ljava/lang/String;"
		);
	}
	inline JArray PrivateCredentialPermission::getPrincipals() const
	{
		return callObjectMethod(
			"getPrincipals",
			"()[[Ljava/lang/String;"
		);
	}
	inline jint PrivateCredentialPermission::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean PrivateCredentialPermission::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	inline java::security::PermissionCollection PrivateCredentialPermission::newPermissionCollection() const
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace javax::security::auth

// Base class headers
#include "../../../java/security/Permission.hpp"

