#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Permission.def.hpp"
#include "./PermissionCollection.def.hpp"
#include "./UnresolvedPermission.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline UnresolvedPermission::UnresolvedPermission(JString arg0, JString arg1, JString arg2, JArray arg3)
		: java::security::Permission(
			"java.security.UnresolvedPermission",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/security/cert/Certificate;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		) {}
	
	// Methods
	inline jboolean UnresolvedPermission::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString UnresolvedPermission::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	inline JString UnresolvedPermission::getUnresolvedActions() const
	{
		return callObjectMethod(
			"getUnresolvedActions",
			"()Ljava/lang/String;"
		);
	}
	inline JArray UnresolvedPermission::getUnresolvedCerts() const
	{
		return callObjectMethod(
			"getUnresolvedCerts",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	inline JString UnresolvedPermission::getUnresolvedName() const
	{
		return callObjectMethod(
			"getUnresolvedName",
			"()Ljava/lang/String;"
		);
	}
	inline JString UnresolvedPermission::getUnresolvedType() const
	{
		return callObjectMethod(
			"getUnresolvedType",
			"()Ljava/lang/String;"
		);
	}
	inline jint UnresolvedPermission::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean UnresolvedPermission::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	inline java::security::PermissionCollection UnresolvedPermission::newPermissionCollection() const
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
	inline JString UnresolvedPermission::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers
#include "./Permission.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
