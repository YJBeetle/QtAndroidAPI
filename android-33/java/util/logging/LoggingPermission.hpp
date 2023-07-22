#pragma once

#include "../../../JString.hpp"
#include "./LoggingPermission.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	inline LoggingPermission::LoggingPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.util.logging.LoggingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::logging

// Base class headers
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::logging;
#endif
