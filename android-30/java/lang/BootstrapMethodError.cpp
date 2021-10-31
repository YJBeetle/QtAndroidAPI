#include "./BootstrapMethodError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	BootstrapMethodError::BootstrapMethodError(QJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	BootstrapMethodError::BootstrapMethodError()
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"()V"
		) {}
	BootstrapMethodError::BootstrapMethodError(jstring arg0)
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	BootstrapMethodError::BootstrapMethodError(jthrowable arg0)
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	BootstrapMethodError::BootstrapMethodError(jstring arg0, jthrowable arg1)
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

