#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Permission.def.hpp"
#include "./PermissionCollection.def.hpp"
#include "./AllPermission.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline AllPermission::AllPermission()
		: java::security::Permission(
			"java.security.AllPermission",
			"()V"
		) {}
	inline AllPermission::AllPermission(JString arg0, JString arg1)
		: java::security::Permission(
			"java.security.AllPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jboolean AllPermission::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AllPermission::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	inline jint AllPermission::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AllPermission::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	inline java::security::PermissionCollection AllPermission::newPermissionCollection() const
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::security

// Base class headers
#include "./Permission.hpp"

