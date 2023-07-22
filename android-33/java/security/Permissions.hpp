#pragma once

#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "./Permission.def.hpp"
#include "./PermissionCollection.def.hpp"
#include "../util/concurrent/ConcurrentHashMap.def.hpp"
#include "./Permissions.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline Permissions::Permissions()
		: java::security::PermissionCollection(
			"java.security.Permissions",
			"()V"
		) {}
	
	// Methods
	inline void Permissions::add(java::security::Permission arg0) const
	{
		callMethod<void>(
			"add",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	inline JObject Permissions::elements() const
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	inline jboolean Permissions::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
} // namespace java::security

// Base class headers
#include "./PermissionCollection.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
