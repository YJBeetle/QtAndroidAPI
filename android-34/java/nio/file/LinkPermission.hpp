#pragma once

#include "../../../JString.hpp"
#include "./LinkPermission.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline LinkPermission::LinkPermission(JString arg0)
		: java::security::BasicPermission(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline LinkPermission::LinkPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.nio.file.LinkPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
