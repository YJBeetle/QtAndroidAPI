#pragma once

#include "../../../JString.hpp"
#include "./ReflectPermission.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	inline ReflectPermission::ReflectPermission(JString arg0)
		: java::security::BasicPermission(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ReflectPermission::ReflectPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang::reflect

// Base class headers
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"

