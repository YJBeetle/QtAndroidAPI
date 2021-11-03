#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./LinkageError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	LinkageError::LinkageError(QJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	LinkageError::LinkageError()
		: java::lang::Error(
			"java.lang.LinkageError",
			"()V"
		) {}
	LinkageError::LinkageError(JString arg0)
		: java::lang::Error(
			"java.lang.LinkageError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	LinkageError::LinkageError(JString arg0, JThrowable arg1)
		: java::lang::Error(
			"java.lang.LinkageError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

