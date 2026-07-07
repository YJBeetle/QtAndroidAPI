#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../security/Permission.def.hpp"
#include "../security/PermissionCollection.def.hpp"
#include "./PropertyPermission.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline PropertyPermission::PropertyPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.util.PropertyPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jboolean PropertyPermission::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString PropertyPermission::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	inline jint PropertyPermission::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean PropertyPermission::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	inline java::security::PermissionCollection PropertyPermission::newPermissionCollection() const
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::util

// Base class headers
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
