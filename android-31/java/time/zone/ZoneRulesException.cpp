#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./ZoneRulesException.hpp"

namespace java::time::zone
{
	// Fields
	
	// Constructors
	ZoneRulesException::ZoneRulesException(JString arg0)
		: java::time::DateTimeException(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ZoneRulesException::ZoneRulesException(JString arg0, JThrowable arg1)
		: java::time::DateTimeException(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::time::zone

