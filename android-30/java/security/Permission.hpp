#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PermissionCollection.def.hpp"
#include "./Permission.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline Permission::Permission(JString arg0)
		: JObject(
			"java.security.Permission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline void Permission::checkGuard(JObject arg0) const
	{
		callMethod<void>(
			"checkGuard",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline jboolean Permission::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString Permission::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	inline JString Permission::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Permission::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Permission::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	inline java::security::PermissionCollection Permission::newPermissionCollection() const
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
	inline JString Permission::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
