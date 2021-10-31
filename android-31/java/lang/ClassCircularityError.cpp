#include "./ClassCircularityError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	ClassCircularityError::ClassCircularityError(QJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	ClassCircularityError::ClassCircularityError()
		: java::lang::LinkageError(
			"java.lang.ClassCircularityError",
			"()V"
		) {}
	ClassCircularityError::ClassCircularityError(jstring arg0)
		: java::lang::LinkageError(
			"java.lang.ClassCircularityError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

