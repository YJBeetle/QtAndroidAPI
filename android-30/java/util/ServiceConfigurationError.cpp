#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ServiceConfigurationError.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	ServiceConfigurationError::ServiceConfigurationError(QJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	ServiceConfigurationError::ServiceConfigurationError(JString arg0)
		: java::lang::Error(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ServiceConfigurationError::ServiceConfigurationError(JString arg0, JThrowable arg1)
		: java::lang::Error(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util

