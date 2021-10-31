#include "./InstantiationError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	InstantiationError::InstantiationError(QAndroidJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
	
	// Constructors
	InstantiationError::InstantiationError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.InstantiationError",
			"()V"
		) {}
	InstantiationError::InstantiationError(jstring arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.InstantiationError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

