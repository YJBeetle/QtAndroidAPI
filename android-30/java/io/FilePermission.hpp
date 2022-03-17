#pragma once

#include "./ObjectInputStream.def.hpp"
#include "./ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/file/FileSystem.def.hpp"
#include "../security/Permission.def.hpp"
#include "../security/PermissionCollection.def.hpp"
#include "./FilePermission.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline FilePermission::FilePermission(JString arg0, JString arg1)
		: java::security::Permission(
			"java.io.FilePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jboolean FilePermission::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString FilePermission::getActions() const
	{
		return callObjectMethod(
			"getActions",
			"()Ljava/lang/String;"
		);
	}
	inline jint FilePermission::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean FilePermission::implies(java::security::Permission arg0) const
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	inline java::security::PermissionCollection FilePermission::newPermissionCollection() const
	{
		return callObjectMethod(
			"newPermissionCollection",
			"()Ljava/security/PermissionCollection;"
		);
	}
} // namespace java::io

// Base class headers
#include "../security/Permission.hpp"

