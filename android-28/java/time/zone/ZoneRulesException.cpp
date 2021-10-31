#include "./ZoneRulesException.hpp"

namespace java::time::zone
{
	// Fields
	
	// QAndroidJniObject forward
	ZoneRulesException::ZoneRulesException(QAndroidJniObject obj) : java::time::DateTimeException(obj) {}
	
	// Constructors
	ZoneRulesException::ZoneRulesException(jstring arg0)
		: java::time::DateTimeException(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ZoneRulesException::ZoneRulesException(jstring arg0, jthrowable arg1)
		: java::time::DateTimeException(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::time::zone

