#pragma once

#include "../../JString.hpp"
#include "./SQLPermission.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	inline SQLPermission::SQLPermission(JString arg0)
		: java::security::BasicPermission(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SQLPermission::SQLPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.sql.SQLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::sql

// Base class headers
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::sql;
#endif
