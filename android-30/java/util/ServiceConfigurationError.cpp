#include "./ServiceConfigurationError.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	ServiceConfigurationError::ServiceConfigurationError(QJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	ServiceConfigurationError::ServiceConfigurationError(jstring arg0)
		: java::lang::Error(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ServiceConfigurationError::ServiceConfigurationError(jstring arg0, jthrowable arg1)
		: java::lang::Error(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::util

