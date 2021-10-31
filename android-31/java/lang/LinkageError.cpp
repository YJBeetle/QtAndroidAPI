#include "./LinkageError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	LinkageError::LinkageError(QAndroidJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	LinkageError::LinkageError()
		: java::lang::Error(
			"java.lang.LinkageError",
			"()V"
		) {}
	LinkageError::LinkageError(jstring arg0)
		: java::lang::Error(
			"java.lang.LinkageError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	LinkageError::LinkageError(jstring arg0, jthrowable arg1)
		: java::lang::Error(
			"java.lang.LinkageError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

