#pragma once

#include "../../JString.hpp"
#include "./NetPermission.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline NetPermission::NetPermission(JString arg0)
		: java::security::BasicPermission(
			"java.net.NetPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline NetPermission::NetPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.net.NetPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
