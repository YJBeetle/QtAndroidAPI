#include "../../../JString.hpp"
#include "./LoggingPermission.hpp"

namespace java::util::logging
{
	// Fields
	
	// QJniObject forward
	LoggingPermission::LoggingPermission(QJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	LoggingPermission::LoggingPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.util.logging.LoggingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::logging

