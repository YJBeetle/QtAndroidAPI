#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./ZoneRulesException.def.hpp"

namespace java::time::zone
{
	// Fields
	
	// Constructors
	inline ZoneRulesException::ZoneRulesException(JString arg0)
		: java::time::DateTimeException(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ZoneRulesException::ZoneRulesException(JString arg0, JThrowable arg1)
		: java::time::DateTimeException(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::time::zone

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../DateTimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::time::zone;
#endif
