#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Permission.def.hpp"
#include "./PermissionCollection.def.hpp"
#include "./BasicPermission.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline BasicPermission::BasicPermission(JString arg0)
		: java::security::Permission(
			"java.security.BasicPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline BasicPermission::BasicPermission(JString arg0, JString arg1)
		: java::security::Permission(
			"java.security.BasicPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jboolean BasicPermission::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString BasicPermission::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	inline jint BasicPermission::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean BasicPermission::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	inline java::security::PermissionCollection BasicPermission::newPermissionCollection() const
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::security

// Base class headers
#include "./Permission.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
