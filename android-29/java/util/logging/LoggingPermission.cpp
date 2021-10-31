#include "./LoggingPermission.hpp"

namespace java::util::logging
{
	// Fields
	
	// QJniObject forward
	LoggingPermission::LoggingPermission(QJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	LoggingPermission::LoggingPermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"java.util.logging.LoggingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::util::logging

