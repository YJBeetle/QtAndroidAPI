#pragma once

#include "../../JString.hpp"
#include "./SerializablePermission.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline SerializablePermission::SerializablePermission(JString arg0)
		: java::security::BasicPermission(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SerializablePermission::SerializablePermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.io.SerializablePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"

