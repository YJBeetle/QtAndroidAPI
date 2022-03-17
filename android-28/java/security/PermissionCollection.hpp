#pragma once

#include "../../JString.hpp"
#include "./Permission.def.hpp"
#include "./PermissionCollection.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline PermissionCollection::PermissionCollection()
		: JObject(
			"java.security.PermissionCollection",
			"()V"
		) {}
	
	// Methods
	inline void PermissionCollection::add(java::security::Permission arg0) const
	{
		callMethod<void>(
			"add",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	inline JObject PermissionCollection::elements() const
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JObject PermissionCollection::elementsAsStream() const
	{
		return callObjectMethod(
			"elementsAsStream",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline jboolean PermissionCollection::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	inline jboolean PermissionCollection::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	inline void PermissionCollection::setReadOnly() const
	{
		callMethod<void>(
			"setReadOnly",
			"()V"
		);
	}
	inline JString PermissionCollection::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

