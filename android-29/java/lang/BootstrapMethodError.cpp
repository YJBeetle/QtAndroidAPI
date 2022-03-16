#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./BootstrapMethodError.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	BootstrapMethodError::BootstrapMethodError()
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"()V"
		) {}
	BootstrapMethodError::BootstrapMethodError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	BootstrapMethodError::BootstrapMethodError(JThrowable arg0)
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	BootstrapMethodError::BootstrapMethodError(JString arg0, JThrowable arg1)
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

