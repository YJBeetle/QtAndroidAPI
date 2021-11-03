#include "../../JString.hpp"
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
	NoClassDefFoundError::NoClassDefFoundError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.NoClassDefFoundError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

