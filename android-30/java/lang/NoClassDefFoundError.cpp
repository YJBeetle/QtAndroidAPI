#include "./NoClassDefFoundError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	NoClassDefFoundError::NoClassDefFoundError(QJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	NoClassDefFoundError::NoClassDefFoundError()
		: java::lang::LinkageError(
			"java.lang.NoClassDefFoundError",
			"()V"
		) {}
	NoClassDefFoundError::NoClassDefFoundError(jstring arg0)
		: java::lang::LinkageError(
			"java.lang.NoClassDefFoundError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

